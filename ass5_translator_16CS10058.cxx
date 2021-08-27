#include "ass5_translator_16CS10058.h"
#include<sstream>
#include<string>
#include<iostream>
using namespace std;


//reference to global variables declared in header file 
symtable* globalST;					// Global Symbol Table
quadArray q;						// Quad array
string typevar;						// Stores latest type
symtable* ST;						// Points to current symbol table
sym* currSymbol; 					// points to current symbol
basicType bt;                       // basic types

sym::sym(string name, string t, symboltype* arrtype, int width) 
{     //Symbol table entry
		this->name=name;
		type=new symboltype(t,arrtype,width);       //Generate type of symbol
		size=calculateSize(type);                   //find the size from the type
		offset=0;                                   //put offset as 0
		val="";                                    //no initial value
		nested=NULL;                                //no nested table
		category="";
}

sym* sym::update(symboltype* t) {
	 	type=t;										 //Update the new type
		this->size=calculateSize(t);                 //new size
		return this;                                 //return the same variable
}

symboltype::symboltype(string type,symboltype* arrtype,int width)        // Constructor for a symbol type
	{
		this->type=type; 
		this->width=width;
		this->arrtype=arrtype;
	}

symtable::symtable(string name)            //Simple constructor for a symbol table
	{
		this->name=name;
		count=0;                           //Put count as 0
	}

sym* symtable::lookup(string name)               //Lookup an id in the symbol table
	{
		sym* symbol;                              
		list<sym>::iterator it;                      //it is iterator for list of symbols
		for(it=table.begin(); it!=table.end(); it++) {
			if(it->name==name) return &(*it);         //find the name of symbol in the symbol table and return if found
		}
		//new symbol to be added to table if not found
		symbol= new sym(name);
		symbol->category="local";
		table.push_back(*symbol);           //push the symbol into the table
		return &table.back();               //return the symbol
	}

void symtable::update()                      //Update the symbol table 
	{
		list<symtable*> tb;                 //list of tables
		int off;
		for(list<sym>::iterator it=table.begin(); it!=table.end(); it++) {
			if(it==table.begin()) {
				it->offset=0;
				off=it->size;
			}
			else {
				it->offset=off;
				off=it->offset+it->size;
			}
			if(it->nested!=NULL) tb.push_back(it->nested);
		}
		for(list<symtable*>::iterator it1=tb.begin(); it1 !=tb.end();++it1) {
		  (*it1)->update();
		}
	}

void symtable::print()                            //print a symbol table
	 {
		list<symtable*> tb;                       //list of tables
		int i=0;
		generateUnderscore(100);
		cout<<endl;
		cout<<"Table Name: "<<this->name<<"\t\t\t Parent Name: ";          //table name
		cout<<(this->parent==NULL?"NULL":this->parent->name); 
		cout<<endl;
		generateUnderscore(100);
		cout<<endl;
		cout<<"Name";              //Name
		generateSpaces(11);
		cout<<"Type";              //Type
		generateSpaces(16);
		cout<<"Category";		  //Category
		generateSpaces(12);
		cout<<"Initial Value";    //Initial Value
		generateSpaces(7);
		cout<<"Size";              //Size
		generateSpaces(11);
		cout<<"Offset";            //Offset
		generateSpaces(9);
		cout<<"Nested"<<endl;       //Nested symbol table
		generateSpaces(100);
		cout<<endl;
		ostringstream str1; 
		for(list<sym>::iterator it=table.begin(); it!=table.end(); it++) {          //Print details for the table
			cout<<it->name;                                    //Print name
			generateSpaces(15-it->name.length());     
			string typeres=printType(it->type);               //Use PrintType to print type
			cout<<typeres;
			generateSpaces(20-typeres.length()); 
			cout<<it->category;
			generateSpaces(20-it->category.length());
			cout<<it->val;                                    //Print initial value
			generateSpaces(20-it->val.length());
			cout<<it->size;                                   //Print size
			str1<<it->size;
			generateSpaces(15-str1.str().length());
			str1.str("");
			str1.clear();
			cout<<it->offset;                                 //print offset
			str1<<it->offset;
			generateSpaces(15-str1.str().length());
			str1.str("");
			str1.clear();
			if(it->nested==NULL) {                             //print nested
				cout<<"NULL"<<endl;	
			}
			else {
				cout<<it->nested->name<<endl;
				tb.push_back(it->nested);
			}
		}
		generateUnderscore(100);
		cout<<"\n\n";

		for(list<symtable*>::iterator it=tb.begin(); it !=tb.end();++it) 
			{
		    	(*it)->print();                               //print symbol table
			}		
	}

quad::quad(string res,string arg1,string op,string arg2)           //general constructor for quad
	{
		this->res=res;
		this->arg1=arg1;
		this->op=op;
		this->arg2=arg2;
	}

quad::quad(string res,int arg1,string op,string arg2)             //general constructor for quad
	{
		this->res=res;
		this->arg2=arg2;
		this->op=op;
		this->arg1=generateString(arg1);
	}

quad::quad(string res,float arg1,string op,string arg2)           //general constructor for quad
	{
		this->res=res;
		this->arg2=arg2;
		this->op=op;
		this->arg1=generateStringfromFloat(arg1);
	}


void quad::print() {                                    //Print a quad
	// Binary Operations
	if(op=="+")						this->type1();
	else if(op=="-")				this->type1();
	else if(op=="*")				this->type1();
	else if(op=="/")				this->type1();
	else if(op=="%")				this->type1();
	else if(op=="|")				this->type1();
	else if(op=="^")				this->type1();
	else if(op=="&")				this->type1();
	// Relational Operations
	else if(op=="==")				this->type2();
	else if(op=="!=")				this->type2();
	else if(op=="<=")				this->type2();
	else if(op=="<")				this->type2();
	else if(op==">")				this->type2();
	else if(op==">=")				this->type2();
	else if(op=="goto")				cout<<"goto "<<res;	
	// Shift Operations
	else if(op==">>")				this->type1();
	else if(op=="<<")				this->type1();
	else if(op=="=")				cout<<res<<" = "<<arg1;
	else if(op=="=str")				cout<<res<<" = "<<arg1;
	else if(op=="=char")			cout<<res<<" = "<<arg1;
	//Unary Operators..
	else if(op=="=&")				cout<<res<<" = &"<<arg1;
	else if(op=="=*")				cout<<res	<<" = *"<<arg1 ;
	else if(op=="*=")				cout<<"*"<<res	<<" = "<<arg1 ;
	else if(op=="uminus")			cout<<res<<" = -"<<arg1;
	else if(op=="~")				cout<<res<<" = ~"<<arg1;
	else if(op=="!")				cout<<res<<" = !"<<arg1;
	//Other operations
	else if(op=="=[]")	 			cout<<res<<" = "<<arg1<<"["<<arg2<<"]";
	else if(op=="[]=")	 			cout<<res<<"["<<arg1<<"]"<<" = "<< arg2;
	else if(op=="return") 			cout<<"return "<<res;
	else if(op=="param") 			cout<<"param "<<res;
	else if(op=="call") 			cout<<res<<" = "<<"call "<<arg1<<", "<<arg2;
	else if(op=="label")			cout<<res<<": ";	
	else if(op=="func") 			cout<<res<<": ";
	else if(op=="funcend") 			cout<<"";
	else							cout<<"Can't find "<<op;			
	cout<<endl;
}

void quad::type1()
	{
		cout<<res<<" = "<<arg1<<" "<<op<<" "<<arg2;
	}
void quad::type2()
	{
		cout<<"if "<<arg1<< " "<<op<<" "<<arg2<<" goto "<<res;
	}

void basicType::addType(string t, int s)          //Add new trivial type to type ST
	{
		type.push_back(t);
		size.push_back(s);
	}

void quadArray::print()                                   //print the quad array i.e the TAC
	{
		generateUnderscore(50);
		cout<<endl;
		cout<<"Three Address Code:"<<endl;           //print TAC
		generateUnderscore(50);
		cout<<endl;
		for(vector<quad>::iterator it=array.begin(); it!=array.end(); it++) {
			if(it->op=="func") {           //it is a label, print it
				cout<<"\n";
				it->print();
				cout<<"\n";
			}
			else if(it->op=="funcend");
			else      
				{                 //otherwise give 4 spaces and then print
				cout<<"\t";
				generateSpaces(4);
				cout<<it-array.begin()<<":  ";
				it->print();
				cout<<"\n";
				}
		}
		generateUnderscore(50);
		cout<<endl;
	}

void generateSpaces(int n)
	{
		int i;
		for(i=0;i<n;i++) cout<<" ";
	}

void generateUnderscore(int n)
	{
		int i;
		for(i=0;i<n;i++) cout<<"_";
	}
string generateString(int a)                    //to convert int to string
	{
		stringstream strs;                      //use buffer stringstream
	    strs<<a; 
	    string temp=strs.str();
	    char* integer=(char*) temp.c_str();
		string str=string(integer);
		return str;                              //return string
	}

string generateStringfromFloat(float x)                        //Take float as input and produce string as output
	{
		std::ostringstream buff;
   		buff<<x;
   		return buff.str();
	}

void emit(string op, string res, string arg1, string arg2) {             //Emit a quad: add the quad into the array
	quad *q1= new quad(res,arg1,op,arg2);
	q.array.push_back(*q1);
}
void emit(string op, string res, int arg1, string arg2) {                 //Emit a quad: add the quad into the array
	quad *q2= new quad(res,arg1,op,arg2);
	q.array.push_back(*q2);
}
void emit(string op, string res, float arg1, string arg2) {                 //Emit a quad: add the quad into the array
	quad *q3= new quad(res,arg1,op,arg2);
	q.array.push_back(*q3);
}


sym* convertType(sym* s, string rettype) {                             //convert symbol s into the required return type
	sym* temp=gentemp(new symboltype(rettype));
		
		if(s->type->type=="float")                                      //if type float
			{
				if(rettype=="int")                                      //and converting to int
					{
						emit("=",temp->name,"float2int("+s->name+")");
						return temp;
					}
				else if(rettype=="char")                               //or converting to char
					{
						emit("=",temp->name,"float2char("+s->name+")");
						return temp;
					}
				return s;
			}
		else if(s->type->type=="int")                                  //if type int
			{
				if(rettype=="float") 									//and converting to float
					{
						emit("=",temp->name,"int2float("+s->name+")");
						return temp;
					}
				else if(rettype=="char") 								//or converting to char
					{
						emit("=",temp->name,"int2char("+s->name+")");
						return temp;
					}
				return s;
			}
		else if(s->type->type=="char") 								  //if type char
			{
				if(rettype=="int") 									//and converting to int
					{
						emit("=",temp->name,"char2int("+s->name+")");
						return temp;
					}
				if(rettype=="double") 								//or converting to double
					{
						emit("=",temp->name,"char2double("+s->name+")");
						return temp;
					}
				return s;
			}
		return s;
}

void changeTable(symtable* newtable) {	       // Change current symbol table
	ST = newtable;
} 

bool checkSymbolType(sym*& s1,sym*& s2)
	{ 	// Check if the symbols have same type or not
		symboltype* type1=s1->type;                         //get the base types
		symboltype* type2=s2->type;
		if(checkSymbolType(type1,type2)) return true;       
		else if(s1=convertType(s1,type2->type)) return true;	//if one can be converted to the other. convert them
		else if(s2=convertType(s2,type1->type)) return true;
		else return false;
	}

bool checkSymbolType(symboltype* t1,symboltype* t2)
	{ 	// Check if the symbol types are same or not
		if(t1==NULL && t2==NULL) return true;               //if two symboltypes are NULL
		else if(t1==NULL) return false;                     //if only one of them is NULL
		else if(t2==NULL) return false;
		else if(t1->type!=t2->type) return false;           //if base type isn't same
		else return checkSymbolType(t1->arrtype,t2->arrtype);       //otherwise check their array type
	}

void backpatch(list<int> l,int addr)                 //backpatching
	{
		string str=generateString(addr);              //get string form of the address
		for(list<int>::iterator it=l.begin(); it!=l.end(); it++) 
		{
			q.array[*it].res=str;                     //do the backpatching
		}
	}

list<int> makelist(int i) 
	{
		list<int> newlist(1,i);                      //make a new list
		return newlist;
	}

list<int> merge(list<int> &a,list<int> &b)
	{
		a.merge(b);                                //merge two existing lists
		return a;
	}

Expression* convertInt2bool(Expression* e)        
	{	// Convert any Expression to bool using standard procedure as given in book
		if(e->type!="bool")                
			{
				e->falselist=makelist(nextinstr());    //update the falselist, truelist and also emit general goto statements
				emit("==","",e->loc->name,"0");
				e->truelist=makelist(nextinstr());
				emit("goto","");
			}
	}

Expression* convertbool2Int(Expression* e) 
	{	// Convert any Expression to bool using standard procedure as given in book
		if(e->type=="bool") 
			{
				e->loc=gentemp(new symboltype("int"));         //use general goto statements and standard procedure
				backpatch(e->truelist,nextinstr());
				emit("=",e->loc->name,"true");
				int p=nextinstr()+1;
				string str=generateString(p);
				emit("goto",str);
				backpatch(e->falselist,nextinstr());
				emit("=",e->loc->name,"false");
			}
	}

int nextinstr() {
	return q.array.size();                //next instruction will be 1+last index and lastindex=size-1. hence return size
}

sym* gentemp(symboltype* t, string init) {           //generate temp variable
	string name;
	name="t"+generateString(ST->count++);             //generate name of temporary
	sym* s = new sym(name);
	s->type = t;
	s->size=calculateSize(t);                        //calculate its size
	s-> val = init;
	s->category="temp";
	ST->table.push_back(*s);                        //push it in ST
	return &ST->table.back();
}

int calculateSize(symboltype* t)                   //calculate size function
	{
		if(t->type=="void")	return bt.size[1];
		else if(t->type=="char") return bt.size[2];
		else if(t->type=="int") return bt.size[3];
		else if(t->type=="float") return  bt.size[4];
		else if(t->type=="arr") return t->width*calculateSize(t->arrtype);     //recursive for arrays(Multidimensional arrays)
		else if(t->type=="ptr") return bt.size[5];
		else if(t->type=="func") return bt.size[6];
		else return -1;
	}


string printType(symboltype* t)                    //Print type of variable(imp for multidimensional arrays)
	{
		if(t==NULL) return bt.type[0];
		if(t->type=="void")	return bt.type[1];
		else if(t->type=="char") return bt.type[2];
		else if(t->type=="int") return bt.type[3];
		else if(t->type=="float") return bt.type[4];
		else if(t->type=="ptr") return bt.type[5]+"("+printType(t->arrtype)+")";       //recursive for ptr
		else if(t->type=="arr") {
			string str=generateString(t->width);                                //recursive for arrays
			return bt.type[6]+"("+str+","+printType(t->arrtype)+")";
			}
		else if(t->type=="func") return bt.type[7];
		else return "NA";
	}