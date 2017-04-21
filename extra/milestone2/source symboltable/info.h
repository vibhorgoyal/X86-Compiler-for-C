#ifndef INFO_H
#define INFO_H

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
typedef vector<int> vi;
#define SZ_CHAR 1
#define SZ_INT	4
#define SZ_DB	8
#define SZ_PTR	4
#define SZ_FLOAT 4

/*enum opcode{
	PLUS=1,
	MINUS,
	MULT,
	DIVIDE,
	MODULO,
	AND,
	OR,
	XOR,
	lOGICAL_AND,
	lOGICAL_OR,
	SHIFT_LEFT,
	SHIFT_RIGHT,
	LESS,
	GREATER,
	EQUAL,
	nOT_EQUAL,
	LESS_OR_EQUAL,
	GREATER_OR_EQUAL,
	UNARY_PLUS,
	UNARY_MINUS,
	COMPLEMENT,
	NOT,
	ASSIGN,
	GOTO,
	IF_LESS,
	IF_GREATER,
	IF_LESS_OR_EQUAL,
	IF_GREATER_OR_EQUAL,
	IF_EQUAL,
	IF_NOT_EQUAL,
	IF_EXPRESSION,
	IF_NOT_EXPRESSION,
	CHAR2INTEGER,
	CHAR2DOUBLE,
	INTEGER2CHAR,
	DOUBLE2CHAR,
	INTEGER2DOUBLE,
	DOUBLE2INTEGER,
	PARAM,
	CALL,
	RETURN,
	ARRAY_INDEX_FROM,
	ARRAY_INDEX_TO,
	REFERENCE,
	DEREFRENCE,
	POINTER_ASSIGNMENT
};
*/
class symboltype;
class exp;
class quad;
class symboltable;


class symbolvalue{
public:
	char charval;
	int intval;
	double doubleval;
	float floatval;
	void *pointerval;


	void setval(int a){
		charval=a;
		intval=a;
		floatval=a;
		doubleval=a;
		pointerval=NULL;
	}
	void setval(char a){
		charval=a;
		intval=a;
		floatval=a;
		doubleval=a;
		pointerval=NULL;
	}
	void setval(double a){
		charval=a;
		intval=a;
		floatval=a;
		doubleval=a;
		pointerval=NULL;
	}
	void setval(float a){
		charval=a;
		intval=a;
		doubleval=a;
		floatval=a;
		pointerval=NULL;
	}
};

class expression;

enum basic_type{
	type_void,
	type_bool,
	type_char,
	type_int,
	type_double,
	type_float,
	type_array,
	type_pointer,
	type_function,
	type_long
};

class quad{
public:
	string op, arg1, arg2, result;
	void print();
};

class decc{
public:
	string name;
	int pc;
	vi alist;
	expression *initial_value;
	basic_type b_type;
	decc(){
		pc=0;
		initial_value = NULL;
	}
};

class expression{
public:
	list<int> truelist,falselist,nextlist;
	int instr;
	string loc;
	basic_type b_type;
	int pc;
	basic_type base_t;
	basic_type return_type;
	int fold;
	string *folder;
	expression(){
		fold=0;
		folder=NULL;
	}
};

class symboltype{
public:
	basic_type b_type;
	vector<int> alist;
	int pc;
	basic_type base_t;
	basic_type return_type;
};

class parameter{
public:
	string name;
	symboltype type;
};


class symboldata{
public:
	string name;
	symboltype type;
	symbolvalue *initial_value;
	int size,offset;
	symboltable *nested_symboltable;
	symboldata(){
		nested_symboltable=NULL;
	}
};

class symboltable{
public:
	bool defined;
	bool declared;
	string name;
	map<string,symboldata*> Symboltable;
	vector<symboldata*> order_symbol;
	int offset;
	symboltable(){
		offset=0;
		name = "GST";
		defined = 0;
		declared = 0;
	}
	symboltable *parent;
	symboldata *lookup(string var);
	void insert(symboldata* var);
	string gentemp(basic_type bt=type_int,bool check_=false,bool overflow_=false);
	void print(bool iserror=0);
};

class new_tab{
public:
	symboltable *temp;
	symboltable *created;
};

class quad_array{
public:
	string name;
	vector<quad> a1;
	int nextinstr,counter;
	quad_array(){
		nextinstr=0;
		counter=0;
	}
   	void emit(string res,string arg1,string op,string arg2="");
   	void backpatch(list<int> argumentlist,int index);
   	void emit(string res,int constant,string unary_op);
   	void emit(string res,double constant,string unary_op);
   	void emit(string res,char constant,string unary_op);
   	string gentmp();
};


list<int> makelist(int index);
list<int> merge(list<int> a,list<int> b);

struct treeNode{
	char* name;
	int uid;
	int no_of_child;
	int typ;
	char* ac_name;
	struct treeNode *child[10];
};

typedef struct treeNode TREE_NODE;
typedef TREE_NODE *PARSE_TREE;

#endif