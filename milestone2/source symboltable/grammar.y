%{
#define NOTHING -1
#include <bits/stdc++.h>
#include "info.h"
using namespace std;

#define pb push_back
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
typedef vector<int> vi;

extern FILE *yyin;
extern int yylex();
void yyerror(const char* s);
extern int yydebug;
extern int  yylineno;
const char* bhej;
quad_array Quad;
symboltable globalst;
symboltable *current_ST,*hunny;
vector<symboltable *> stack_ST;

string current_name;
string bing;
int globe;
int flag;
int error_exists;
expression* type_check(expression* t1,expression* t2, string op);

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif


%}

%union {
  int intval;
  double doubleval;
  float floatval;
  char charval;
  void *pointer;
  basic_type b_type;
  string *pstring;
  symboldata *symboldat;
  symboltype *symboltypei;
  expression *exp_info;
  decc *declarationi;
  vector<decc*> *decvec;
  parameter *param;
  vector<parameter*> *parameter_list;
  struct treeNode *tVal;
  new_tab curls;
}

%type <tVal>  string generic_selection generic_assoc_list generic_association declaration storage_class_specifier  struct_or_union_specifier struct_or_union struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator  atomic_type_specifier type_qualifier function_specifier alignment_specifier    type_qualifier_list    identifier_list  abstract_declarator direct_abstract_declarator designation designator_list designator static_assert_declaration  labeled_statement external_declaration function_definition declaration_list


%type<curls> M N if else P
%type<symboltypei> type_name
%type<exp_info> primary_expression constant constant_expression
%type<exp_info> expression expression_opt
%type<exp_info> postfix_expression assignment_expression unary_expression
%type<exp_info> additive_expression multiplicative_expression shift_expression cast_expression
%type<exp_info> relational_expression equality_expression conditional_expression
%type<exp_info> logical_or_expression logical_and_expression and_expression exclusive_or_expression inclusive_or_expression selection_statement statement iteration_statement compound_statement expression_statement jump_statement assignment_expression_opt
%type<intval> unary_operator 
%type<pstring> assignment_operator hack
%type<exp_info> block_item block_item_list
%type<b_type> type_specifier declaration_specifiers
%type<intval> pointer
%type<exp_info> initializer
%type<declarationi> direct_declarator initializer_list declarator init_declarator
%type<param> parameter_declaration
%type<decvec> init_declarator_list
%type<parameter_list> parameter_list parameter_type_list parameter_type_list_opt argument_expression_list

%token<pstring>		IDENTIFIER STRING_LITERAL TYPEDEF_NAME 
%token<intval>		I_CONSTANT 
%token<doubleval>	F_CONSTANT
%token				SIZEOF FUNC_NAME
%token				PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token				AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token				SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token				XOR_ASSIGN OR_ASSIGN

%token				TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token				CONST RESTRICT VOLATILE
%token				BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token				COMPLEX IMAGINARY 
%token				STRUCT UNION ELLIPSIS

%token				CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token				ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL


%start base;
%%




primary_expression
	: IDENTIFIER{
		$$=new expression;
		string tmp1=(*($1));
		symboldata *var=current_ST->lookup(tmp1);
		if(var==NULL){		
				bhej=tmp1.c_str();
				yyerror("undeclared variable");//errorr undeclared tmp1 at line number 
		}
		else{
			$$->b_type = var->type.b_type;
			$$->pc=var->type.pc;
			$$->base_t=var->type.base_t;
		}

	}
	| constant{
		$$=$1;
	}
	| string{
		$$=new expression;
		$$->b_type=type_char;
		$$->pc=1;
		$$->base_t=type_pointer;
	}
	| '(' expression ')'{
		$$=$2;
	}
	| generic_selection
	;

constant
	: I_CONSTANT{
		$$=new expression;
		$$->b_type = type_int;
	}		/* includes character_constant */
	| F_CONSTANT{
		$$=new expression;
		$$->b_type = type_double;
	}
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association
	;

generic_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	;

postfix_expression
	: primary_expression{
		$$=$1;
	}
	| postfix_expression '[' expression ']'{
		$$=$1;
	}
	| postfix_expression '(' ')'{
		$$=$1;
	}
	| postfix_expression '(' argument_expression_list ')'{
		$$=$1;
	}
	| postfix_expression '.' IDENTIFIER{
		$$=$1;
	}
	| postfix_expression PTR_OP IDENTIFIER{
		$$=$1;
	}
	| postfix_expression INC_OP{
		$$=$1;
	}
	| postfix_expression DEC_OP{
		$$=$1;
	}
	| '(' type_name ')' '{' initializer_list '}'{
		$$=new expression;
		$$->b_type=$2->b_type;
		$$->pc=$2->pc;
		$$->base_t=$2->base_t;
	}
	| '(' type_name ')' '{' initializer_list ',' '}'{
		$$=new expression;
		$$->b_type=$2->b_type;
		$$->pc=$2->pc;
		$$->base_t=$2->base_t;
	}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression{
		$$=$1;
	}
	| INC_OP unary_expression{
		$$=$2;
	}
	| DEC_OP unary_expression{
		$$=$2;
	}
	| unary_operator cast_expression{
		$$=$2;
	}
	| SIZEOF unary_expression{
		$$=new expression;
		$$->b_type= type_int;
	}
	| SIZEOF '(' type_name ')'{
		$$=new expression;
		$$->b_type= type_int;
	}
	| ALIGNOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression{
		$$=$1;
	}
	| '(' type_name ')' cast_expression{
		$$=new expression;
		$$->b_type=$2->b_type;
		$$->pc=$2->pc;
		$$->base_t=$2->base_t;
	}
	;

multiplicative_expression
	: cast_expression{
		$$=$1;
	}
	| multiplicative_expression '*' cast_expression{
		$$=type_check($1, $3, "*");
	}
	| multiplicative_expression '/' cast_expression{
		$$=type_check($1, $3, "/");
	}
	| multiplicative_expression '%' cast_expression{
		$$=type_check($1, $3, "%");
	}
	;

additive_expression
	: multiplicative_expression{
		$$=$1;
	}
	| additive_expression '+' multiplicative_expression{
		$$=type_check($1, $3, "+");
	}
	| additive_expression '-' multiplicative_expression{
		$$=type_check($1, $3, "-");
	}
	;

shift_expression
	: additive_expression{
		$$=$1;
	}
	| shift_expression LEFT_OP additive_expression{
		$$=type_check($1, $3, "<<");
	}
	| shift_expression RIGHT_OP additive_expression{
		$$=type_check($1, $3, ">>");
	}
	;

relational_expression
	: shift_expression{
		$$=$1;
	}
	| relational_expression '<' shift_expression{
		$$=type_check($1, $3, "<");
	}
	| relational_expression '>' shift_expression{
		$$=type_check($1, $3, ">");
	}
	| relational_expression LE_OP shift_expression{
		$$=type_check($1, $3, "<=");
	}
	| relational_expression GE_OP shift_expression{
		$$=type_check($1, $3, ">=");
	}
	;

equality_expression
	: relational_expression{
		$$=$1;
	}
	| equality_expression EQ_OP relational_expression{
		$$=type_check($1, $3, "==");
	}
	| equality_expression NE_OP relational_expression{
		$$=type_check($1, $3, "!=");
	}
	;

and_expression
	: equality_expression{
		$$=$1;
	}
	| and_expression '&' equality_expression{
		$$=type_check($1, $3, "&");
	}
	;

exclusive_or_expression
	: and_expression{
		$$=$1;
	}
	| exclusive_or_expression '^' and_expression{
		$$=type_check($1, $3, "^");
	}
	;

inclusive_or_expression
	: exclusive_or_expression{
		$$=$1;
	}
	| inclusive_or_expression '|' exclusive_or_expression{
		$$=type_check($1, $3, "|");
	}
	;

logical_and_expression
	: inclusive_or_expression{
		$$=$1;
	}
	| logical_and_expression AND_OP inclusive_or_expression{
		$$=type_check($1, $3, "&&");
	}
	;

logical_or_expression
	: logical_and_expression{
		$$=$1;
	}
	| logical_or_expression OR_OP logical_and_expression{
		$$=type_check($1, $3, "||");
	}
	;

conditional_expression
	: logical_or_expression{
		$$=$1;
	}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression{
		$$=$1;
	}
	| unary_expression assignment_operator assignment_expression{
		$$=type_check($1, $3, *$2);
	}
	;

assignment_operator
	: '='{
		*$$="=";
	}
	| MUL_ASSIGN{
		*$$="*=";
	}
	| DIV_ASSIGN{
		*$$="/=";
	}
	| MOD_ASSIGN{
		*$$="%=";
	}
	| ADD_ASSIGN{
		*$$="+=";
	}
	| SUB_ASSIGN{
		*$$="-=";
	}
	| LEFT_ASSIGN{
		*$$="<<=";
	}
	| RIGHT_ASSIGN{
		*$$=">>=";
	}
	| AND_ASSIGN{
		*$$="&=";
	}
	| XOR_ASSIGN{
		*$$="^=";
	}
	| OR_ASSIGN{
		*$$="|=";
	}
	;

expression
	: assignment_expression{
		$$=$1;
	}
	| expression ',' assignment_expression{
		$$=$1;
	}
	;

constant_expression
	: conditional_expression{
		$$=$1;
	}	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	{
		basic_type type_current = $1;
		int size_now=-1;
		if(type_current==type_char){ 
        	size_now=SZ_CHAR;
        }
        if(type_current==type_int){
        	size_now=SZ_INT;
        }
        if(type_current==type_double){
        	size_now=SZ_DB;
        }
        if(type_current==type_float){ 
        	size_now=SZ_FLOAT;
        }
        if(type_current==type_void){
        	size_now=SZ_INT;
        }
        if(type_current==type_long){
        	size_now=SZ_DB;
        }
        vector<decc*> lst=*($2);
        for(vector<decc*>::iterator it=lst.begin();it!=lst.end();it++)
        {
        	//cout<<"inside now"<<endl;
            decc *my_dec = *it;
            /*
            if(my_dec->b_type==type_function){
                GST=&(globalst);
            }            
            if(my_dec->b_type==type_function)
            {
            	//cout<<"wow there we have a function"<<endl;
                symboldata *var=GST->lookup(my_dec->name);
                symboldata *retval=var->nested_symboltable->lookup("retVal",type_now,my_dec->pc);
                var->offset=GST->offset;
                var->size= 0;
                var->initial_value=NULL;
                continue;
            }
            */
            symboldata *var=current_ST->lookup(my_dec->name);

            if(var == NULL){
            	var = new symboldata;
            	var->nested_symboltable=NULL;
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	if(my_dec->pc > 0){
            		var->type.base_t = type_pointer;
            	}

            	var->type.b_type = type_current;
            	if(my_dec->alist.size()){
            		var->type.base_t = type_array;
            		var->type.alist = my_dec->alist;
            	}
            	var->offset = current_ST->offset;
            	for(int p:my_dec->alist )
            		size_now*=p;
            	var->size = size_now;	
            	current_ST->insert(var);
            	continue;
            }
            else if(var->type.base_t == type_function){
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	var->type.b_type = type_current;
            	if(my_dec->alist.size()){
            		cout<<"helllo"<<endl;
            		var->type.base_t = type_array;
            		var->type.alist = my_dec->alist;
            	}
            	var->offset = current_ST->offset;
            	for(int p:my_dec->alist )
            		size_now*=p;
            	var->size = size_now;
            	//current_ST->insert(var);
            	//current_ST->offset-=var->size;
            }
            else if(var!=NULL ){
            	bhej = var->name.c_str();
            	yyerror("already declared ");
            }
            
            
        }


	}
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	{
		$$ = $1;
	}
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	{
		$$ = new vector<decc *>;
		$$->pb($1);
	}
	| init_declarator_list ',' init_declarator
	{
		$$=$1;
		$$->pb($3);
	}
	;

hack
	: IDENTIFIER
	{
		*$$ = *$1;
	}
	| constant
	{
		*$$ = "";
		
	}
	;

init_declarator
	: declarator '=' hack
	{
		$$ = $1;

	}
	| declarator{
		$$ = $1;
	}
	;
storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	{
		$$=type_void;
	}
	| CHAR{
		$$=type_char;
	}
	| SHORT
	| INT
	{
		$$=type_int;
	}
	| LONG
	{
		$$=type_long;
	}
	| FLOAT
	{
		$$=type_float;
	}
	| DOUBLE
	{
		$$=type_double;
	}
	| SIGNED
	| UNSIGNED
	| BOOL
	| COMPLEX
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator
	{
		$$ = $2;
		$$->pc = $1;
	}
	| direct_declarator{
		$$ = $1;
		$$->pc = 0;
	}
	;

Z
	:
	{
		cout<<"hello"<<endl;
	}
	;
direct_declarator
	: IDENTIFIER
	{
		$$=new decc;
		$$->name=*($1);
	}
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')'
	{
		
		$$=$1;
		$$->b_type = type_function;
		symboldata *funcdata=current_ST->lookup($$->name);
		if(funcdata!=NULL){
			
			if(funcdata->nested_symboltable==NULL){
				funcdata->nested_symboltable = new symboltable;
			}
			else if(funcdata->nested_symboltable!=NULL&&funcdata->nested_symboltable->declared==1){

			}
			else if(funcdata->nested_symboltable!=NULL && funcdata->nested_symboltable->defined==1){
				bhej = funcdata->nested_symboltable->name.c_str();
				yyerror("already defined");
			}
			
			else funcdata->nested_symboltable->declared=1;
			



		}
		if(funcdata==NULL){
		cout<<"bbb"<<endl;
			funcdata = new symboldata;
			funcdata->name = $1->name;
			funcdata->type.base_t = type_function;
			funcdata->nested_symboltable = new symboltable;
			funcdata->nested_symboltable->declared=1;
			funcdata->nested_symboltable->name = $1->name;
			stack_ST.pb(funcdata->nested_symboltable);
			current_ST->insert(funcdata);
			current_ST->Symboltable[funcdata->name]= funcdata;


			for(auto it: *$3){
				//cout<<"inside now"<<endl;
				parameter *my_dec = it;

	            int size_now;
	            basic_type type_current = my_dec->type.b_type;
	            if(type_current==type_char){ 
		        	size_now=SZ_CHAR;
		        }
		        if(type_current==type_int){
		        	size_now=SZ_INT;
		        }
		        if(type_current==type_double){
		        	size_now=SZ_DB;
		        }
		        if(type_current==type_float){ 
		        	size_now=SZ_FLOAT;
		        }
		        if(type_current==type_void){
		        	size_now=SZ_INT;
		        }
		        if(type_current==type_long){
		        	size_now=SZ_DB;
		        }

	            symboldata *var=funcdata->nested_symboltable->lookup(my_dec->name);
	            if(var == NULL){
	            	var = new symboldata;
	            	var->nested_symboltable=NULL;
	            	var->name = my_dec->name;
	            	var->type = my_dec->type;
	            	if(my_dec->type.alist.size()){
	            		var->type.base_t = type_array;
	            		var->type.alist = my_dec->type.alist;
	            	}
	            	var->offset = funcdata->nested_symboltable->offset;
	            	for(int q:my_dec->type.alist )
	            		size_now*=q;
	            	var->size = size_now;	
	            	funcdata->nested_symboltable->insert(var);
	            }
	            else {
	            	bhej = my_dec->name.c_str();
	            	yyerror("already declared ");
	            }
			}
			//if(flag==1)
				//current_ST = funcdata->nested_symboltable;

		}

		else{
			if((*$3).size()==(funcdata->nested_symboltable->order_symbol).size()){

				vector<symboltype> param,symb;
				for(auto it:*$3)
					param.pb(it->type);
				for(auto it:funcdata->nested_symboltable->order_symbol)
					symb.pb(it->type);
				
				int yes=1;
				for(int i=0;i<param.size();i++){
					if(param[i].b_type!=symb[i].b_type || param[i].alist!=symb[i].alist || param[i].pc!=symb[i].pc || param[i].base_t!=symb[i].base_t)
						yes=0;
						
				}
				cout<<yes<<endl;
				if(yes){
					delete funcdata->nested_symboltable;
					funcdata->nested_symboltable = new symboltable;
					funcdata->nested_symboltable->name = $1->name;

					current_ST->Symboltable[funcdata->name]= funcdata;


					for(auto it: *$3){
						//cout<<"inside now"<<endl;
						parameter *my_dec = it;

			            int size_now;
			            basic_type type_current = my_dec->type.b_type;
			            if(type_current==type_char){ 
				        	size_now=SZ_CHAR;
				        }
				        if(type_current==type_int){
				        	size_now=SZ_INT;
				        }
				        if(type_current==type_double){
				        	size_now=SZ_DB;
				        }
				        if(type_current==type_float){ 
				        	size_now=SZ_FLOAT;
				        }
				        if(type_current==type_void){
				        	size_now=SZ_INT;
				        }
				        if(type_current==type_long){
				        	size_now=SZ_DB;
				        }

			            symboldata *var=funcdata->nested_symboltable->lookup(my_dec->name);
			            if(var == NULL){
			            	var = new symboldata;
			            	var->nested_symboltable=NULL;
			            	var->name = my_dec->name;
			            	var->type = my_dec->type;
			            	if(my_dec->type.alist.size()){
			            		var->type.base_t = type_array;
			            		var->type.alist = my_dec->type.alist;
			            	}
			            	var->offset = funcdata->nested_symboltable->offset;
			            	for(int q:my_dec->type.alist )
			            		size_now*=q;
			            	var->size = size_now;	
			            	funcdata->nested_symboltable->insert(var);
			            }
					}
				}	

				else{
					string fname=funcdata->name;
					bhej=fname.c_str();
					yyerror("declarations and definition are not same for ");
					//printf("\n\n\n\n\n\n\ndeclarations and definition are not same\n\n\n\n\n\n\n\n");
				}		
			}
			else {
				string fname=funcdata->name;
				bhej=fname.c_str();
				yyerror("declarations and definition are not same for ");
				//printf("\n\n\n\n\n\n\ndeclarations and definition are not same\n\n\n\n\n\n\n\n");
			}
		}


	}
	| direct_declarator '(' ')'
	{
		$$=$1;
		$$->b_type = type_function;
		symboldata *funcdata=current_ST->lookup($$->name);
		if(funcdata==NULL){
			funcdata = new symboldata;
			funcdata->name = $1->name;
			funcdata->type.base_t = type_function;
			funcdata->nested_symboltable = new symboltable;
			funcdata->nested_symboltable->declared=1;
			funcdata->nested_symboltable->name = $1->name;
			stack_ST.pb(funcdata->nested_symboltable);
			current_ST->insert(funcdata);
			current_ST->Symboltable[funcdata->name]= funcdata;
			
		}
		else if(funcdata->nested_symboltable->Symboltable.size()!=0){
			bhej = funcdata->name.c_str();
			yyerror("declaration and definition not same");		}
		else{
			if(funcdata->nested_symboltable==NULL){
				funcdata->nested_symboltable = new symboltable;
			}
			else if(funcdata->nested_symboltable!=NULL&&funcdata->nested_symboltable->declared==1){

			}
			else if(funcdata->nested_symboltable!=NULL && funcdata->nested_symboltable->defined==1){
				bhej = funcdata->nested_symboltable->name.c_str();
				yyerror("already defined");
			}
			
			else funcdata->nested_symboltable->declared=1;
			
		}
	}
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	{
		$$=1 + $2;
	}
	| '*'
	{
		$$=1;
	}
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS
	| parameter_list
	{

		$$ = $1;
	}
	;

parameter_list
	: parameter_declaration
	{
		$$=new vector<parameter *>;
		$$->pb($1);
	}
	| parameter_list ',' parameter_declaration{
		$1->pb($3);
		$$=$1;
	}
	;

parameter_declaration
	: declaration_specifiers declarator
	{
		$$ = new parameter;
		$$->name = $2->name;
		$$->type.b_type = $1; 
	}
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

M:	
	{	
		if(flag==0){
			$$.temp = current_ST;
			$$.created = new symboltable;
			stack_ST.pb($$.created);
			symboldata *data = new symboldata;
			char a[100] ;
			strcpy(a,current_name.c_str());
			char b[100];
			sprintf(b,"%d",globe++); 
			data->name = strcat(a,b);
			data->offset = current_ST->offset;
			current_ST->insert(data);
			data->nested_symboltable = $$.created;
			data->nested_symboltable->parent = current_ST;
			data->nested_symboltable->name = data->name;
			current_ST = $$.created;
		}
		else if (flag==1){
			if(current_name!="for")
			flag=0;
			$$.temp = current_ST;
		}
	}
	;

compound_statement
	: '{' '}'
	|  '{' {current_name = "cmpd";} M block_item_list '}'
	{
		current_ST=$3.temp;
	}
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

if
	: IF
	{
		flag=1;
		$$.temp = current_ST;
		$$.created = new symboltable;
		stack_ST.pb($$.created);
		symboldata *data = new symboldata;
		char a[100] = "if_";
		char b[100];
		sprintf(b,"%d",globe++);
		data->offset = current_ST->offset; 
		data->name = strcat(a,b);
		current_ST->insert(data);
		data->nested_symboltable = $$.created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = $$.created;
	}
	;

else
	: ELSE
	{
		flag=1;
		$$.temp = current_ST;
		$$.created = new symboltable;
		stack_ST.pb($$.created);
		symboldata *data = new symboldata;
		char a[100] = "else_";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		data->offset = current_ST->offset;
		current_ST->insert(data);
		data->nested_symboltable = $$.created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = $$.created;
	}
	;

selection_statement
	: if '(' expression ')' statement {current_ST = $1.temp;} else statement {current_ST = $7.temp;}
	| if '(' expression ')' statement {current_ST = $1.temp;}
	{
	}
	| SWITCH '(' expression ')' statement
	;

P
	:
	{
		$$.temp = current_ST;
		$$.created = new symboltable;
		stack_ST.pb($$.created);
		symboldata *data = new symboldata;
		char a[100] = "for";
		char b[100];
		sprintf(b,"%d",globe++); 
		data->name = strcat(a,b);
		data->offset = current_ST->offset;
		current_ST->insert(data);
		data->nested_symboltable = $$.created;
		data->nested_symboltable->parent = current_ST;
		data->nested_symboltable->name = data->name;
		current_ST = $$.created;
		flag=1;
	}
	;

iteration_statement
	: WHILE {current_name="while"; } M '(' expression ')' statement {current_ST = $3.temp;}
	| DO {current_name="do_while";} M statement WHILE '(' expression ')' ';' {current_ST = $3.temp;}
	| FOR P '(' expression_statement expression_statement ')' statement  {current_ST = $2.temp;}
	| FOR P '(' expression_statement expression_statement expression ')' statement {current_ST = $2.temp;}
	| FOR P '(' declaration expression_statement ')' statement {current_ST = $2.temp;}
	| FOR P '(' declaration expression_statement expression ')' statement {current_ST = $2.temp;}
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	{
		symboldata *funcdata = globalst.lookup(current_ST->name);
		cout<<"\n\n\n"<<current_ST->name<<"\n\n\n";
	}
	;

base
	: translation_unit
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition compound_statement
	{
		current_ST = hunny;
	}
	| declaration
	;


function_definition
	: declaration_specifiers declarator declaration_list 
	| declaration_specifiers declarator 
	{
		flag=1;
		hunny = current_ST;
		symboldata *funcdata=current_ST->lookup($2->name);

		//if not NULL do typecheck here
		if(funcdata==NULL){
			funcdata->nested_symboltable->defined = 1;
			current_ST->insert(funcdata);
		}
		else{
			if(funcdata->nested_symboltable->defined == 1){
				bhej = funcdata->nested_symboltable->name.c_str();
				yyerror("already defined");
			}
			else{
				funcdata->nested_symboltable->defined=1;
				funcdata->nested_symboltable->defined=1;
			}	
		}

		decc *my_dec = $2;
		funcdata->name = my_dec->name;
		funcdata->type.pc = my_dec->pc;
		funcdata->type.b_type = my_dec->b_type;
		funcdata->type.return_type = $1;
		if(my_dec->pc)
			funcdata->type.base_t = type_pointer;
		funcdata->size=0;
		funcdata->offset=current_ST->offset;

		current_ST = funcdata->nested_symboltable;
	}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
int id=0;

FILE *fp;

void print_file(PARSE_TREE tree){
	fp=fopen("final.txt","w");
	fprintf(fp,"graph milestone{\n");
	
	//print_node(tree);
	fprintf(fp,"}");
}

void print_node(PARSE_TREE tree){
	int temp=0;
	int noc=tree->no_of_child,i;
	
	
	if(tree->typ==1){
		if(tree->name == tree->ac_name){
			return;
		}
		else 
		fprintf(fp," \"%s_%d\" -- \"%s\";\n",tree->name,tree->uid,tree->ac_name);
		return;
	}
	
	printf("%d\n\n\n\n\n\n",noc);
	for(i=0;i<noc;i++){
		fprintf(fp,"\"%s_%d\" -- \"%s_%d\";\n",tree->name,tree->uid,(tree->child[i])->name,(tree->child[i])->uid);
	}
	

	/*
	for(i=0;i<noc;i++){
		if(((tree->child)[i])->child==0 || tree->typ==1){
			fprintf(fp," \"%s_%d\" -- \"%s_%s_%d\";\n",tree->name,tree->uid,(tree->child[i])->ac_name,(tree->child[i])->name,(tree->child[i])->uid);
		}
		else{
			fprintf(fp,"\"%s_%d\" -- \"%s_%d\";\n",tree->name,tree->uid,(tree->child[i])->name,(tree->child[i])->uid);
		}
	}
	*/
	
	
	//printf("tree name %s\n\n\n\n\n",tree->name);
	for(i=0;i<noc;i++){
		//printf("tree name %s\n uid = %d \n\n\n\n",((tree->child[i])->child[0])->name,tree->child[i]->no_of_child);
		print_node((tree->child)[i]);
	}

}

void yyerror(const char *s)
{
	fflush(stdout);
	error_exists=1;
	fprintf(stderr, "ERORR : line %d *** %s %s\n",yylineno, s, bhej);
}

PARSE_TREE create_node(char * na, int noc, PARSE_TREE *ch){
	PARSE_TREE t;
	t = (PARSE_TREE)malloc(sizeof(TREE_NODE));
	t->name =na;
	t->typ = 0;
	t->uid = id++;
	t->no_of_child = noc;
	int i;
	for(i=0;i<noc;i++)
	t->child[i] = ch[i];

	return (t);

}

PARSE_TREE create_tnode(char * na, char *ana){
	PARSE_TREE t;
	t = (PARSE_TREE)malloc(sizeof(TREE_NODE));
	t->name =na;
	t->typ = 1;
	t->uid = id++;
	t->no_of_child = 0;
	t->ac_name = ana;
	return (t);

}

void print(symboltable *table){
	cout<<"----------------"<<table->name<<"------------"<<endl;
	//cout<<"name"<<"\t"<<"\t"<<"type"<<"\t"<<"\t"<<"size"<<"\t"<<"\t"<<"offset"<<"\t"<<"base_t\t"<<endl;
		cout<<"name,"<<"type"<<","<<"size"<<","<<"offset"<<","<<"base_t"<<endl;

	for(auto t:table->order_symbol){
				
		cout<<t->name<<",";
		if(t->type.b_type==type_char){
			cout<<"char,";
		}
		else if(t->type.b_type==type_int){
			cout<<"int,";
		}
		else if(t->type.b_type==type_double){
			cout<<"double,";
		}
		else if(t->type.b_type==type_float){
			cout<<"float,";
		}
		else if(t->type.b_type==type_function){
			cout<<"function,";
		}
		else{
			
			if(t->type.b_type==type_char){
				cout<<"char, ";
			}
			else if(t->type.b_type==type_int){
				cout<<"int, ";
			}
			else if(t->type.b_type==type_double){
				cout<<"double, ";
			}
		}

		/*
		if(t->type.base_t==type_pointer){
			For(i,0,t->type.pc){
				cout<<"*";
			}
			cout<<"\t"<<"\t";
		}
		*/
		cout<<t->size<<","<<t->offset<<","<<t->type.base_t<<",";
		
		
		
		cout<<endl;
	}
}

expression* type_check(expression* t1, expression* t2, string op){
		expression* res;
		res=new expression;
		bhej = op.c_str();
		if(op=="*" || op == "/"){
			if(t1->base_t == type_pointer || t2->base_t == type_pointer || t1->b_type == type_char || t2->b_type == type_char || t1->pc!=0 || t2->pc!=0){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			if(t1->b_type == t2->b_type){
				res->b_type=t1->b_type;
				return res;
			}
			if(t1->b_type == type_int){
				res->b_type=t2->b_type;
				return res;
			}
			if(t2->b_type == type_int){
				res->b_type=t1->b_type;
				return res;
			}
			if(t1->b_type == type_double || t2->b_type==type_double){
				res->b_type= type_double;
				return res;
			}

		}
		if(op=="%" || op == "<<" || op == ">>" || op=="&" || op=="^" || op== "|" || op =="<<=" || op=="<<=" || op=="%=" || op=="&=" || op=="|=" || op=="^="){
			if(t1->base_t == type_pointer || t2->base_t == type_pointer || t1->b_type == type_char || t2->b_type == type_char || t1->pc!=0 || t2->pc!=0){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			if(t1->b_type != type_int || t2->b_type != type_int){
				yyerror("cannot apply operation");// errorr cannot apply operation
				return NULL;
			}
			res->b_type= type_int;
			return res;
		}
		if(op=="+" || op == "-"){
			//cout<<"\n\n\n\n\n  aa gaya yaha  \n\n\n\n\n\n";
			if(t1->b_type == t2->b_type){
				if(t2->base_t == type_pointer || t1->b_type == type_char || t1->pc!=0){
					yyerror("cannot apply operation");// error cannot apply operation 
					return NULL;
				}
				res->b_type=t1->b_type;
				return res;
			}
			if(t1->b_type == type_int){
				res->b_type=t2->b_type;
				return res;
			}
			if(t2->b_type == type_int){
				res->b_type=t1->b_type;
				return res;
			}
			if((t1->b_type == type_double && t2->b_type==type_float) || (t2->b_type==type_double && t1->b_type == type_float)){
				res->b_type= type_double;
				return res;
			}
			yyerror("cannot apply operation");// error cannot apply operation 
					return NULL;

		}
		if(op=="<" || op == "<=" || op == ">" || op == ">="){
			if((t1->b_type != t2->b_type && (t1->b_type==type_char || t2->b_type==type_char)) || t1->base_t == type_pointer || t1->pc!=0 || t2->pc!=0){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			res->b_type= type_bool;
			return res;
		}

		if(op=="==" || op == "!=" ){
			if( t1->base_t != t2-> base_t || t1->pc!=t2->pc || (t1->b_type != t2->b_type && (t1->b_type==type_char || t2->b_type==type_char))){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			res->b_type= type_bool;
			return res;
		}
		if(op=="&&" || op == "||" ){
			if(t1->b_type==t2->b_type && (t1->b_type==type_int || t1->b_type==type_bool)){
				res->b_type= type_bool;
				return res;
			}
			yyerror("cannot apply operation");// error cannot apply operation 
			return NULL;
		}

		if(op=="-=" || op=="+=" || op=="*=" || op=="/="){
			if(t1->b_type!=t2->b_type || t1->base_t == type_pointer || t2->base_t == type_pointer || t1->b_type == type_char || t1->pc!=0 ){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			
			res->b_type= t1->b_type;
			return res;
		}
		if(op=="="){
			if(t1->b_type==t2->b_type && t1->base_t == t2->base_t &&  t1->pc== t2->pc ){
				res=t1;
				return res; 
				
			}
			else if(t1->base_t != t2->base_t ||  t1->pc!= t2->pc || t1->b_type==type_char || t2->b_type==type_char){
				yyerror("cannot apply operation");// error cannot apply operation 
				return NULL;
			}
			else{
				if(t1->b_type==type_double || t2->b_type==type_double ){
					res->b_type=type_double;
				}
				else if(t1->b_type==type_float || t2->b_type==type_float ){
					res->b_type=type_float;
				}
				res->pc=t1->pc;
				res->base_t=t1->base_t;
				return res;

			}
			yyerror("cannot apply operation");// error cannot apply operation 
			return NULL;
		}
		

		
	
}

int main()
{
    yydebug = 0;
    flag=0;
    globe=0;
    error_exists = 0;
    current_ST=&(globalst);
    bool failure = yyparse();  
    //int sz = Quad.a1.size();
    //cout<<"number if statements--->>"<<sz<<endl;
    //For(i,0,sz){
    //    cout<<i<<": "; Quad.a1[i].print();
    //}
    /*cout<<"----------------SYMBOL_TABLE----------------"<<endl;

    current_ST->print();
    cout<<"--------------------------------------------"<<endl;
    for(map<string,symboldata*> :: iterator it =current_ST->Symboltable.begin(); it !=current_ST->Symboltable.end(); ++it)
    {
        symboldata *tmp = it->second;
        if(tmp->nested_symboltable != NULL)
        {
            cout<<"----------------SYMBOL_TABLE("<<tmp->name<<")----------------"<<endl;
            tmp->nested_symboltable->print();
            cout<<"--------------------------------------------"<<endl;
        }
    }
    */
    if(failure)
        printf("failure\n");
    else
        printf("success\n");

    //cout<<stack_ST.size(); 
    cout<<"error exists"<<error_exists<<endl;
    freopen("symbol_table.csv","w",stdout);
    if(error_exists==0){
	    print(current_ST);
	    cout<<endl;   
	    for(auto t:stack_ST){
	    	print(t);
	    	cout<<endl;
	    }
    }
}
