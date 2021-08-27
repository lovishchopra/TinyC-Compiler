#ifndef _TRANSLATE_H
#define _TRANSLATE_H

#include <bits/stdc++.h>

extern  char* yytext;
extern  int yyparse();

using namespace std;

class symboltype;				// Type of a symbol in symbol table
class quad;						// Entry in quad array
class quadArray;				// QuadArray
class sym;						// Entry in a symbol table
class symtable;					// Symbol Table


extern symtable* table;						// Current Symbol Table
extern symtable* globalTable;				// Global Symbol Table
extern quadArray q;							// Array of Quads
extern sym* currentSymbol;					// Pointer to just encountered symbol


class symboltype { // Type of symbols in symbol table
public:
	symboltype(string type, symboltype* ptr = NULL, int width = 1);
	string type;
	int width;					// Size of array (in case of arrays)
	symboltype* ptr;				// for 2d arrays and pointers
};

class quad { 			//A single quad has four components:
	public:
		string op;					// Operator
		string res;					// res
		string arg1;				// Argument 1
		string arg2;				// Argument 2

		//Print the Quad
		void print ();	
		void type1();      //common printing types
		void type2();

		//Constructors							
		quad (string res, string arg1, string op = "=", string arg2 = "");			
		quad (string res, int arg1, string op = "=", string arg2 = "");				
		quad (string res, float arg1, string op = "=", string arg2 = "");			
};

class quadArray { // Array of quads
public:
	vector <quad> array;		                // Vector of quads
	void print ();								// Print the quadArray
};

class sym { // Symbols class
public:
	string name;				// Name of the symbol
	symboltype *type;				// Type of the Symbol
	string val;		// Symbol initial valus (if any)
	string category;    		// global, local or param
	int size;					// Size of the symbol
	int offset;					// Offset of symbol
	symtable* nested;				// Pointer to nested symbol table

	sym (string name, string t="int", symboltype* ptr = NULL, int width = 0); //constructor declaration
	sym* update(symboltype * t); 	// A method to update different fields of an existing entry.
	sym* link_to_symbolTable(symtable* t);
};



class symtable { // Symbol Table class
public:
	string name;					// Name of Table
	int count;						// Count of temporary variables
	list<sym> table; 				// The table of symbols
	symtable* parent;				// Immediate parent of the symbol table
	map<string, int> ar;			//activation record
	symtable (string name="null");
	sym* lookup (string name);								// Lookup for a symbol in symbol table
	void print();					            			// Print the symbol table
	void update();						        			// Update offset of the complete symbol table
};


//Attributes for statements
struct statement {
	list<int> nextlist;					//nextlist for Statement
};

struct array {
	string cat;				//Used for type of array: may be ptr or arr
	sym* loc;					//Location used to compute address of array
	sym* array;					//pointer to the symbol table entry
	symboltype* type;			//type of the subarray generated (important for multidimensional arrays)
};

struct expr {
	string type; 							//to store whether the expression is of type int or bool or float or char
	sym* loc;								//pointer to the symbol table entry
	list<int> truelist;						//fruelist for boolean expressions
	list<int> falselist;					//falselist for boolean expressions
	list<int> nextlist;						//for statement expressions
};

string generateString(int a);
string generateStringfromFloat(float x);
void generateSpaces(int n);
void generateUnderscore(int n);
//Different Attributes for Different Types and Extra Functions

sym* gentemp (symboltype* t, string init = "");	  //generate a temporary variable and insert it in the current ST

//Emit Functions
void emit(string op, string res, string arg1="", string arg2 = "");  
void emit(string op, string res, int arg1, string arg2 = "");		  
void emit(string op, string res, float arg1, string arg2 = "");   

//Backpatching and related functions
void backpatch (list <int> lst, int i);
list<int> makelist (int i);							    // Make a new list contaninig an integer
list<int> merge (list<int> &l1, list <int> &l2);		// Merge two lists into a single list
int nextinstr();										// Returns the next instruction number

//Type checking and conversion functions
sym* convertType(sym*, string);								// for type conversion
bool checksymboltype(sym* &s1, sym* &s2);				// check for same type of two symbol table entries
bool checksymboltype(symboltype* t1, symboltype* t2);	// check for same type of two symboltype objects
int calculateSize (symboltype *);						// calculate size of symbol type
string printType(symboltype *);							// print type of symbol
void changeTable (symtable* newtable);					//to change current table

string generateString(int n);
string generateStringfromFloat(float n);

expr* convertInt2Bool(expr *);				// convert int expression to boolean
expr* convertBool2Int(expr *);				// convert boolean expression to int

#endif