#include "ass6_16CS10058_translator.h"
#include <iostream>
#include <cstring>
#include <string>

extern FILE *yyin;
extern vector<string> ProgramStrings;

using namespace std;

int labelCount=0;							// Label count in asm file
std::map<int, int> labels;				// map from quad number to label number
ofstream out;								// asm file stream
vector <quad> array;						// quad array
string targetcodefilename="ass6_16CS10058_";		// asm file name
string inputfile="ass6_16CS10058_test";		// input file name


void makeLabels()                  //To make labels from the statements
{
	array = q.array;
    for (vector<quad>::iterator it = array.begin(); it!=array.end(); it++) {
	int i;
	if (it->op=="goto" || it->op=="<" || it->op==">" || it->op=="<=" || it->op==">=" || it->op=="==" || it->op=="!=") {
		i = atoi(it->res.c_str());
		labels[i] = 1;
	}
	}
}

void staticdata(ofstream &targetcodefile)            //To generate the static data
{
    targetcodefile<<"\t.file	\"test.c\"\n";
	list<sym>::iterator it=table->table.begin();

	while(it!=table->table.end()) {
		if (it->category!="function") 
		{
			if (it->type->type=="char") 
			{ // Global char
				if (it->val=="") 
				{
					targetcodefile<<"\t.comm\t"<<it->name<<",1,1\n";
				}
				else 
				{
					targetcodefile<<"\t.globl\t"<<it->name<<"\n";
					targetcodefile<<"\t.type\t"<<it->name<<", @object\n";
					targetcodefile<<"\t.size\t"<<it->name<<", 1\n";
					targetcodefile<<it->name<<":\n";
					targetcodefile<<"\t.byte\t"<<atoi( it->val.c_str())<<"\n";
				}
			}
			if (it->type->type=="int") { // Global int
				if (it->val!="") {
					targetcodefile<<"\t.globl\t"<<it->name<<"\n";
					targetcodefile<<"\t.data\n";
					targetcodefile<<"\t.align 4\n";
					targetcodefile<<"\t.type\t"<<it->name<<", @object\n";
					targetcodefile<<"\t.size\t"<<it->name<<", 4\n";
					targetcodefile<<it->name<<":\n";
					targetcodefile<<"\t.long\t"<<it->val<<"\n";
				}
				else {
					targetcodefile<<"\t.comm\t"<<it->name<<",4,4\n";
				}
			}
		}
	it++;
	}
	if (ProgramStrings.size()) {
		targetcodefile<<"\t.section\t.rodata\n";
		for (vector<string>::iterator it = ProgramStrings.begin(); it!=ProgramStrings.end(); it++) {
			targetcodefile<<".LC"<<it - ProgramStrings.begin()<<":\n";
			targetcodefile<<"\t.string\t"<<*it<<"\n";	
		}	
	}
       
}

void computeActivationRecord(symtable* st) {             //Compute the activation record
	int param = -20;
	int local = -24;
	for (list <sym>::iterator it = st->table.begin(); it!=st->table.end(); it++) {
		if (it->category =="param") {
			st->ar [it->name] = param;
			param +=it->size;			
		}
		else if (it->name=="return") continue;
		else {
			st->ar [it->name] = local;
			local -=it->size;
		}
	}
}

void generateFunctionPrologue(ofstream &targetcodefile,string res)        //Generate the function prologue
	{
				targetcodefile<<".globl\t"<<res<<"\n";
				targetcodefile<<"\t.type\t"	<<res<<", @function\n";
				targetcodefile<<res<<": \n";
				targetcodefile<<".LFB"<<labelCount<<":"<<endl;
				targetcodefile<<"\t.cfi_startproc"<<endl;
				targetcodefile<<"\tpushq \t%rbp"<<endl;
				targetcodefile<<"\t.cfi_def_cfa_offset 8"<<endl;
				targetcodefile<<"\t.cfi_offset 5, -8"<<endl;
				targetcodefile<<"\tmovq \t%rsp, %rbp"<<endl;
				targetcodefile<<"\t.cfi_def_cfa_register 5"<<endl;
				table = globalTable->lookup(res)->nested;
				targetcodefile<<"\tsubq\t$"<<table->table.back().offset+24<<", %rsp"<<endl;

	}

void generateFunctionEpilogue(ofstream &targetcodefile,string res)		//Generate function epilogue
	{
				targetcodefile<<"leave\n";
				targetcodefile<<"\t.cfi_restore 5\n";
				targetcodefile<<"\t.cfi_def_cfa 4, 4\n";
				targetcodefile<<"\tret\n";
				targetcodefile<<"\t.cfi_endproc"<<endl;
				targetcodefile<<".LFE"<<labelCount++<<":"<<endl;
				targetcodefile<<"\t.size\t"<<res<<", .-"<<res;
	}

void addInstr(ofstream &targetcodefile,string op,string res, string arg1, string arg2, string s)     //Mapping for +
	{
				bool flag=true;
					if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
					else{
						char * p ;
						strtol(s.c_str(), &p, 10) ;
						if(*p == 0) flag=true ;
						else flag=false;
					}
				if (flag) {
					targetcodefile<<"addl \t$"<<atoi(arg2.c_str())<<", "<<table->ar[arg1]<<"(%rbp)";
					}
				else {
					targetcodefile<<"movl \t"<<table->ar[arg1]<<"(%rbp), "<<"%eax"<<endl;
					targetcodefile<<"\tmovl \t"<<table->ar[arg2]<<"(%rbp), "<<"%edx"<<endl;
					targetcodefile<<"\taddl \t%edx, %eax\n";
					targetcodefile<<"\tmovl \t%eax, "<<table->ar[res]<<"(%rbp)";
				}
	}

void subInstr(ofstream &targetcodefile,string res,string arg1,string arg2)       //Mapping for -
	{
				targetcodefile<<"movl \t"<<table->ar[arg1]<<"(%rbp), "<<"%eax"<<endl;
				targetcodefile<<"\tmovl \t"<<table->ar[arg2]<<"(%rbp), "<<"%edx"<<endl;
				targetcodefile<<"\tsubl \t%edx, %eax\n";
				targetcodefile<<"\tmovl \t%eax, "<<table->ar[res]<<"(%rbp)";
	}

void divInstr(ofstream &targetcodefile,string res,string arg1,string arg2)	//Mapping for /
	{
				targetcodefile<<"movl \t"<<table->ar[arg1]<<"(%rbp), "<<"%eax"<<endl;
				targetcodefile<<"\tcltd"<<endl;
				targetcodefile<<"\tidivl \t"<<table->ar[arg2]<<"(%rbp)"<<endl;
				targetcodefile<<"\tmovl \t%eax, "<<table->ar[res]<<"(%rbp)";		
	}

void eqInstr(ofstream &targetcodefile,string op,string res, string arg1, string arg2, string s)		//Mapping for =
	{
				s=arg1;
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				for(int i=0;i<10;i++) flag=!flag;
				if (flag) 
					targetcodefile<<"movl\t$"<<atoi(arg1.c_str())<<", "<<"%eax"<<endl;
				else
					targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), "<<"%eax"<<endl;
				targetcodefile<<"\tmovl \t%eax, "<<table->ar[res]<<"(%rbp)";
	}

void eqopInstr(ofstream &targetcodefile,string res,string arg1,string arg2)		//Mapping for ==
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tcmpl\t"<<table->ar[arg2]<<"(%rbp), %eax\n";
				targetcodefile<<"\tje .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void neopInstr(ofstream &targetcodefile,string res,string arg1,string arg2)		//Mapping for !=
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tcmpl\t"<<table->ar[arg2]<<"(%rbp), %eax\n";
				targetcodefile<<"\tjne .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void lInstr(ofstream &targetcodefile,string res,string arg1,string arg2)		//Mapping for <
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tcmpl\t"<<table->ar[arg2]<<"(%rbp), %eax\n";
				targetcodefile<<"\tjl .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void ginstr(ofstream &targetcodefile,string res,string arg1,string arg2)		//Mapping for >
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tcmpl\t"<<table->ar[arg2]<<"(%rbp), %eax\n";
				targetcodefile<<"\tjg .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void geinstr(ofstream &targetcodefile,string res,string arg1,string arg2)		//Mapping for >=
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tcmpl\t"<<table->ar[arg2]<<"(%rbp), %eax\n";
				targetcodefile<<"\tjge .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void leInstr(ofstream &targetcodefile,string res,string arg1,string arg2)		////Mapping for <=
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tcmpl\t"<<table->ar[arg2]<<"(%rbp), %eax\n";
				targetcodefile<<"\tjle .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void gotoInstr(ofstream &targetcodefile,string res)			//Mapping for goto
			{
				targetcodefile<<"jmp .L"<<(2*labelCount+labels.at(atoi( res.c_str() )) +2 );
			}

void addrInstr(ofstream &targetcodefile,string res, string arg1)		//Mapping for =&
			{
				targetcodefile<<"leaq\t"<<table->ar[arg1]<<"(%rbp), %rax\n";
				targetcodefile<<"\tmovq \t%rax, "<< table->ar[res]<<"(%rbp)";
			}

void ptrrInstr(ofstream &targetcodefile,string res, string arg1)		//Mapping for =*
			{
				targetcodefile<<"movl\t"<<table->ar[arg1]<<"(%rbp), %eax\n";
				targetcodefile<<"\tmovl\t(%eax),%eax\n";
				targetcodefile<<"\tmovl \t%eax, "<< table->ar[res]<<"(%rbp)";
			}

void ptrlInstr(ofstream &targetcodefile,string res, string arg1)		//Mapping for *=
			{
				targetcodefile<<"movl\t"<<table->ar[res]<<"(%rbp), %eax\n";
				targetcodefile<<"\tmovl\t"<<table->ar[arg1]<<"(%rbp), %edx\n";
				targetcodefile<<"\tmovl\t%edx, (%eax)";
			}
			
void arrrInstr(ofstream &targetcodefile,string res,string arg1,string arg2,map<string,int> ArrMap)		//Mapping for =[]
			{
				int off=0;
				off=ArrMap[arg2]*(-1)+table->ar[arg1];
//				targetcodefile<<"movq\t"<<table->ar[arg2]<<"(%rbp), "<<"%rax"<<endl;
				targetcodefile<<"movq\t"<<off<<"(%rbp), "<<"%rax"<<endl;
				targetcodefile<<"\tmovq \t%rax, "<< table->ar[res]<<"(%rbp)";	
			}

void arrlInstr(ofstream &targetcodefile,string res,string arg1,string arg2,map<string,int> ArrMap)		//Mapping for []=
			{
				int off=0;
				off=ArrMap[arg1]*(-1)+table->ar[res];
//				targetcodefile<<"movq\t"<<table->ar[arg1]<<"(%rbp), "<<"%rax"<<endl;
				targetcodefile<<"movq\t"<<table->ar[arg2]<<"(%rbp), "<<"%rdx"<<endl;
				targetcodefile<<"\tmovq\t"<<"%rdx, "<<off<<"(%rbp)";
			}

void returnInstr(ofstream &targetcodefile,string res)		//Mapping for return 
			{
				if(res!="") targetcodefile<<"movl\t"<<table->ar[res]<<"(%rbp), "<<"%eax";
				else targetcodefile<<"nop";
			}

void callInstr(ofstream &targetcodefile,string arg1, vector<string> params)			//Mapping for call
			{
			symtable* t = globalTable->lookup(arg1)->nested;
				int i,j=0;	// index
				for(i=0;i<10;i++) j=1-j;
				for (list <sym>::iterator it = t->table.begin(); it!=t->table.end(); it++) {
					i = distance ( t->table.begin(), it);
					if (it->category== "param") {

						switch (j)
							{
								case 0: 
									targetcodefile<<"movl \t"<<table->ar[params[i]]<<"(%rbp), "<<"%eax"<<endl;
									targetcodefile<<"\tmovq \t"<<table->ar[params[i]]<<"(%rbp), "<<"%rdi"<<endl;
									//targetcodefile<<"\tmovl \t%eax, "<<(t->ar[it->name]-8 )<<"(%rsp)\n\t";
									j=j+1;
									break;
								
								case 1:
									targetcodefile<<"movl \t"<<table->ar[params[i]]<<"(%rbp), "<<"%eax"<<endl;
									targetcodefile<<"\tmovq \t"<<table->ar[params[i]]<<"(%rbp), "<<"%rsi"<<endl;
									//targetcodefile<<"\tmovl \t%eax, "<<(t->ar[it->name]-8 )<<"(%rsp)\n\t";
									j=j+1;
									break;

								case 2:
									targetcodefile<<"movl \t"<<table->ar[params[i]]<<"(%rbp), "<<"%eax"<<endl;
									targetcodefile<<"\tmovq \t"<<table->ar[params[i]]<<"(%rbp), "<<"%rdx"<<endl;
									//targetcodefile<<"\tmovl \t%eax, "<<(t->ar[it->name]-8 )<<"(%rsp)\n\t";
									j=j+1;
									break;
								
								case 3:
									targetcodefile<<"movl \t"<<table->ar[params[i]]<<"(%rbp), "<<"%eax"<<endl;
									targetcodefile<<"\tmovq \t"<<table->ar[params[i]]<<"(%rbp), "<<"%rcx"<<endl;
									//targetcodefile<<"\tmovl \t%eax, "<<(t->ar[it->name]-8 )<<"(%rsp)\n\t";
									j=j+1;
									break;
								default:
									targetcodefile<<"\tmovq \t"<<table->ar[params[i]]<<"(%rbp), "<<"%rdi"<<endl;							
								
						}
					}
					else break;
				}
			}


void funcInstr(ofstream &targetcodefile)			//Mapping for function
	{
		symtable* t = table;
				int i=0;
				for (list <sym>::iterator it = t->table.begin(); it!=t->table.end(); it++) {
					if (it->category== "param") {
						if (i==0) {
							targetcodefile<<"\tmovq\t%rdi, "<<table->ar[it->name]<<"(%rbp)";
							i++;
						}
						else if(i==1) {
							targetcodefile<<"\n\tmovq\t%rsi, "<<table->ar[it->name]<<"(%rbp)";
							i++;
						}
						else if (i==2) {
							targetcodefile<<"\n\tmovq\t%rdx, "<<table->ar[it->name]<<"(%rbp)";
							i++;
						}
						else if(i==3) {
							targetcodefile<<"\n\tmovq\t%rcx, "<<table->ar[it->name]<<"(%rbp)";
							i++;
						}
					}
					else break;
				}
	}

void genasm()                   //Generate ASM
{
	makeLabels();
	int p=0;
	//To update the goto labels
	int i;
	int count = 0;
	for (std::map<int,int>::iterator it=labels.begin(); it!=labels.end(); ++it)
		it->second = count++;
	for(i=0;i<p;i++) count++;
	list<symtable*> tablelist;
	for (list <sym>::iterator it = globalTable->table.begin(); it!=globalTable->table.end(); it++) {
		if (it->nested!=NULL) tablelist.push_back (it->nested);
	}
	for (list<symtable*>::iterator iterator = tablelist.begin(); 
		iterator != tablelist.end(); ++iterator) {                  //Compute Activation Records of All STs
		computeActivationRecord(*iterator);
	}

	//targetcodefile
	ofstream targetcodefile;
	targetcodefile.open(targetcodefilename.c_str());

	staticdata(targetcodefile);										//Generate Static Data

	targetcodefile<<"\t.text	\n";

	vector<string> params;
	std::map<string, int> ArrMap;
	for (vector<quad>::iterator it = array.begin(); it!=array.end(); it++) {
		if (labels.count(it - array.begin())) {
			targetcodefile<<".L"<<(2*labelCount+labels.at(it - array.begin()) + 2 )<<": "<<endl;     //.L1, .L2....
		}

		string op = it->op;
		string res = it->res;
		string arg1 = it->arg1;
		string arg2 = it->arg2;
		string s=arg2;
		for(i=0;i<p;i++) count++;



		if(op=="param"){
			params.push_back(res);           //if op is parameter
		}
		else {
			targetcodefile<<"\t";
			// Binary Operations: + - * /
			if (op=="+") {          
					addInstr(targetcodefile,op,res,arg1,arg2,s);
			}
			else if (op=="-") {
					subInstr(targetcodefile,res,arg1,arg2);
			}
			else if (op=="*") {				//Mapping for *
				targetcodefile<<"movl \t"<<table->ar[arg1]<<"(%rbp), "<<"%eax"<<endl;
				bool flag=true;
				if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) flag=false ;
				else{
					char * p ;
					strtol(s.c_str(), &p, 10) ;
					if(*p == 0) flag=true ;
					else flag=false;
				}
				if (flag) {
					targetcodefile<<"\timull \t$"<<atoi(arg2.c_str())<<", "<<"%eax"<<endl;
					symtable* t = table;
					string val;
					for (list <sym>::iterator it = t->table.begin(); it!=t->table.end(); it++) {
						if(it->name==arg1) val=it->val; 
					}
					ArrMap[res]=atoi(arg2.c_str())*atoi(val.c_str());
				}
				else targetcodefile<<"\timull \t"<<table->ar[arg2]<<"(%rbp), "<<"%eax"<<endl;
				targetcodefile<<"\tmovl \t%eax, "<<table->ar[res]<<"(%rbp)";			
			}
			else if(op=="/") {
				divInstr(targetcodefile,res,arg1,arg2);
			}

			// Bit Operators /* Ignored */
			else if (op=="%")		targetcodefile<<res<<" = "<<arg1<<" % "<<arg2;
			else if (op=="^")		targetcodefile<<res<<" = "<<arg1<<" ^ "<<arg2;
			else if (op=="|")		targetcodefile<<res<<" = "<<arg1<<" | "<<arg2;
			else if (op=="&")		targetcodefile<<res<<" = "<<arg1<<" & "<<arg2;
			// Shift Operations /* Ignored */
			else if (op=="<<")		targetcodefile<<res<<" = "<<arg1<<"<<"<<arg2;
			else if (op==">>")		targetcodefile<<res<<" = "<<arg1<<" >> "<<arg2;

			else if (op=="=")	{
				eqInstr(targetcodefile,op,res,arg1,arg2,s);
			}			
			else if (op=="equalSTR")	{
				targetcodefile<<"movq \t$.LC"<<arg1<<", "<<table->ar[res]<<"(%rbp)";    //if equal to string 
			}
			else if (op=="equalchar")	{
				targetcodefile<<"movb\t$"<<atoi(arg1.c_str())<<", "<<table->ar[res]<<"(%rbp)";     //if equal to char
			}					
			// Relational Operations: == != < > <= >=
			else if (op=="==") {
				eqopInstr(targetcodefile,res,arg1,arg2);
				
			}
			else if (op=="!=") {
				neopInstr(targetcodefile,res,arg1,arg2);
			}
			else if (op=="<") {
				lInstr(targetcodefile,res,arg1,arg2);
			}
			else if (op==">") {
				ginstr(targetcodefile,res,arg1,arg2);
			}
			else if (op==">=") {
				geinstr(targetcodefile,res,arg1,arg2);
			}
			else if (op=="<=") {
				leInstr(targetcodefile,res,arg1,arg2);
			}
			else if (op=="goto") {
				gotoInstr(targetcodefile,res);
			}
			// Unary Operators
			else if (op=="=&") {         //Address
				addrInstr(targetcodefile,res,arg1);
			}
			else if (op=="=*") {		 //Pointer Right
				ptrrInstr(targetcodefile,res,arg1);	
			}
			else if (op=="*=") {         //Pointer Left
				ptrlInstr(targetcodefile,res,arg1);
			} 			
			else if (op=="uminus") {     //uminus
				targetcodefile<<"negl\t"<<table->ar[arg1]<<"(%rbp)";
			}
			else if (op=="~")		targetcodefile<<res 	<<" = ~"<<arg1;
			else if (op=="!")		targetcodefile<<res 	<<" = !"<<arg1;
			else if (op=="=[]") {
				arrrInstr(targetcodefile,res,arg1,arg2,ArrMap);
			}	 			
			else if (op=="[]=") {
				arrlInstr(targetcodefile,res,arg1,arg2,ArrMap);
			}	 
			else if (op=="return") {
				returnInstr(targetcodefile,res);
			}
			else if (op=="param") {
				params.push_back(res);
			}
			else if (op=="call") {
				// Function Table
				callInstr(targetcodefile,arg1,params);
				params.clear();
				targetcodefile<<"\tcall\t"<<arg1<<endl;
				targetcodefile<<"\tmovl\t%eax, "<<table->ar[res]<<"(%rbp)";
			}
			else if (op=="func") {     //start of function
				generateFunctionPrologue(targetcodefile,res);
				// Function Table
				funcInstr(targetcodefile);
			}		
			else if (op=="funcend") {   //end of function
				generateFunctionEpilogue(targetcodefile,res);
			}
			else targetcodefile<<"op";
			targetcodefile<<endl;
		}
	}
	targetcodefile<<	"\t.ident\t	\"Lovish Chopra 16CS10058\"\n";
	targetcodefile<<	"\t.section\t.note.GNU-stack,\"\",@progbits\n";
	targetcodefile.close();
}

template<class T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
	copy(v.begin(), v.end(), ostream_iterator<T>(os, " ")); 
	return os;
}

int main(int argc, char* argv[]) {      //main function
	inputfile=inputfile+string(argv[argc-1])+string(".c");
	targetcodefilename=targetcodefilename+string(argv[argc-1])+string(".s");
	globalTable = new symtable("Global");
	table = globalTable;
	yyin = fopen(inputfile.c_str(),"r"); 
	yyparse();
	globalTable->update();
	globalTable->print();
	q.print();
	genasm();
}