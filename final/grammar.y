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
vector<string> str_consts;
string named;
string vib;

string current_name;
int counter_temp;
string bing;
int globe,tell;
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

%type <tVal>  string generic_selection generic_assoc_list generic_association declaration storage_class_specifier  struct_or_union_specifier struct_or_union struct_declaration_list  atomic_type_specifier type_qualifier function_specifier alignment_specifier    type_qualifier_list    identifier_list  abstract_declarator direct_abstract_declarator designation designator_list designator static_assert_declaration  labeled_statement external_declaration function_definition declaration_list


%type<curls> M if else P MMstruct
%type<symboltypei> type_name
%type<exp_info> primary_expression constant constant_expression
%type<exp_info> expression expression_opt
%type<exp_info> postfix_expression assignment_expression unary_expression
%type<exp_info> additive_expression multiplicative_expression shift_expression cast_expression hack
%type<exp_info> relational_expression equality_expression conditional_expression unary_operator M1 N
%type<exp_info> logical_or_expression logical_and_expression and_expression exclusive_or_expression inclusive_or_expression selection_statement statement iteration_statement compound_statement expression_statement jump_statement assignment_expression_opt
%type<pstring> assignment_operator 
%type<exp_info> block_item block_item_list
%type<b_type> type_specifier declaration_specifiers specifier_qualifier_list
%type<intval> pointer
%type<exp_info> initializer
%type<declarationi> direct_declarator initializer_list declarator init_declarator struct_declarator struct_declaration
%type<param> parameter_declaration
%type<decvec> init_declarator_list struct_declarator_list
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
N:
	{
		$$=new expression;
		$$->nextlist=makelist(Quad.nextinstr);
		Quad.emit("","","GOTO","");
	}
	;

M1:
	{
		$$=new expression;
		$$->instr=Quad.nextinstr;
	}
	;

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
			$$->loc = tmp1;
			$$->return_type=var->type.return_type;
		}

	}
	| constant{
		$$=$1;
	}
	| string
	| '(' expression ')'{
		$$=$2;
	}
	| generic_selection
	;

constant
	: I_CONSTANT{
		$$=new expression;
		//$$->loc= Quad.gentmp();
		$$->loc = current_ST->gentemp(type_int, type_void, 0);
		$$->b_type = type_int;
		string tm;
		stringstream gurki;
		gurki<<$1;
		gurki>>tm;
		Quad.emit($$->loc,tm,"ASSIGN","=");
	}		/* includes character_constant */
	| F_CONSTANT{
		$$=new expression;
		//$$->loc= Quad.gentmp();
		string tm;
		stringstream gurki;
		gurki<<$1;
		gurki>>tm;
		$$->loc = current_ST->gentemp(type_float, type_void, 0);
		Quad.emit($$->loc,tm,"ASSIGN","=");
		$$->b_type = type_double;
	}
	;

string
	: STRING_LITERAL{
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1 ,"ASSIGN");
		*/
	}
	| FUNC_NAME{
		/*$$=new expression;
		$$->base_t=type_char;
		$$->pc=1;
		$$->b_type=type_pointer;
		$$->loc= Quad.gentmp();
		Quad.emit($$->loc, $1,"ASSIGN");
		*/
	}
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
	| postfix_expression '[' assignment_expression ']'{
		$1->array_list.push_back($3->loc);
		$$=$1;
	}
	| postfix_expression '(' ')'{
		$$=$1;
	}
	| postfix_expression '(' argument_expression_list ')'{
		$$=$1;
		string function_name=$1->loc;
		symboltable *functionsymbol=globalst.lookup(function_name)->nested_symboltable;
		vector<parameter*> arglist=*($3);
		vector<symboldata*> parameterlist=functionsymbol->order_symbol;
		if(arglist.size()!=functionsymbol->arg_tot){
			//yyerror("function not called in right way");
		}

		else{
			For(i,0,arglist.size()){
				if(parameterlist[i]->type.b_type == type_function){
					if(!(arglist[i]->type.base_t==parameterlist[i]->type.return_type && arglist[i]->type.pc==parameterlist[i]->type.pc))
						yyerror("wrong input arguement given");
				}
			}
		}

		For(i,0,arglist.size()){

			//////////////////////////////////////////////////////////////////////////////////////////////////type check here

			if(arglist[i]->type.b_type!=parameterlist[i]->type.b_type){
				if(arglist[i]->type.base_t!=parameterlist[i]->type.b_type)
					yyerror("wrong input arguement given");

				//string temp=Quad.gentmp();
				string temp= current_ST->gentemp(parameterlist[i]->type.b_type,parameterlist[i]->type.base_t,parameterlist[i]->type.pc);
				arglist[i]->name=temp;
			}
			Quad.emit(arglist[i]->name,"","PARAM","");
		}
		basic_type a = globalst.lookup(function_name)->type.b_type;
		basic_type b = globalst.lookup(function_name)->type.base_t;
		basic_type c = globalst.lookup(function_name)->type.return_type;
		int p = globalst.lookup(function_name)->type.pc;
		vib = current_ST->gentemp(c,b,p);
		string gurki;
		stringstream tm;
		tm<<arglist.size();
		tm>>gurki;
		Quad.emit(function_name,gurki,"CALL",vib);
		$$->loc=vib;


	}
	| postfix_expression '.' IDENTIFIER{
		$$=$1;
	}
	| postfix_expression PTR_OP IDENTIFIER{
		$$=$1;
	}
	| postfix_expression INC_OP{
		$$=new expression;
		$$->loc=Quad.gentmp();
		Quad.emit($$->loc,$1->loc,"ASSIGN","=");
		Quad.emit($1->loc,$1->loc,"+","1");
	}
	| postfix_expression DEC_OP{
		$$=new expression;
		$$->loc=Quad.gentmp();
		Quad.emit($$->loc,$1->loc,"ASSIGN","=");
		Quad.emit($1->loc,$1->loc,"+","1");
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
	: assignment_expression{
		parameter *temp=new parameter;
		temp->name=$1->loc;
		temp->type.b_type=$1->b_type;
		temp->type.base_t=$1->base_t;
		temp->type.return_type=$1->return_type;
		temp->type.pc=$1->pc;
		$$=new vector<parameter*>;
		$$->pb(temp);
	}
	| argument_expression_list ',' assignment_expression{
		parameter *temp=new parameter;
		temp->name=$3->loc;
		temp->type.b_type=$3->b_type;
		temp->type.base_t=$3->base_t;
		temp->type.return_type=$3->return_type;
		temp->type.pc=$3->pc;
		$$=$1;
		$$->pb(temp);
	}
	;

unary_expression
	: postfix_expression{
		$$=$1;
	}
	| INC_OP unary_expression{
		Quad.emit($2->loc,$2->loc,"+","1");
		$$= new expression;
		$$->loc=current_ST->gentemp($2->b_type,$2->base_t,$2->pc);
		$$->b_type = $2->b_type; $$->base_t=$2->base_t; $$->pc=$2->pc;
		Quad.emit($$->loc,$2->loc,"ASSIGN","=");
	}
	| DEC_OP unary_expression{
		Quad.emit($2->loc,$2->loc,"-","1");
		$$= new expression;
		$$->loc=current_ST->gentemp($2->b_type,$2->base_t,$2->pc);
		$$->b_type = $2->b_type; $$->base_t=$2->base_t; $$->pc=$2->pc;
		Quad.emit($$->loc,$2->loc,"ASSIGN","=");
	}
	| unary_operator cast_expression{
		$$= new expression;
		$$->loc=current_ST->gentemp($2->b_type,$2->base_t,$2->pc);
		$$->b_type = $2->b_type; $$->base_t=$2->base_t; $$->pc=$2->pc;
		if($1->loc[0] == '&'){
			$$->b_type = type_pointer; $$->base_t=$2->b_type; $$->pc=1;
			Quad.emit($$->loc,$2->loc,"REFERENCE",""); 
		}
		else if($1->loc[0] == '*'){
			$$->b_type = $2->base_t; $$->base_t=$2->b_type; $$->pc=0; 
		}
		else{
			Quad.emit($$->loc,"",$1->loc,$2->loc);
		}
	}
	| SIZEOF unary_expression{
		$$=new expression;
		$$->b_type= type_int;
		$$->loc=current_ST->gentemp(type_int,type_void,0);
		Quad.emit($$->loc,"","sizeof",$2->loc);
	}
	| SIZEOF '(' type_name ')'{
		$$=new expression;
		$$->b_type= type_int;
		
	}
	| ALIGNOF '(' type_name ')'{
	}
	;

unary_operator
	: '&'{
		$$=new expression;
		$$->loc="&";
	}
	| '*'{
		$$=new expression;
		$$->loc="*";
	}
	| '+'{
		$$=new expression;
		$$->loc="+";
	}
	| '-'{
		$$=new expression;
		$$->loc="-";
	}
	| '~'{
		$$=new expression;
		$$->loc="~";
	}
	| '!'{
		$$=new expression;
		$$->loc="!";
	}
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
		//$$->loc = Quad.gentmp();
		$$->loc=current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "*", $3->loc);

	}
	| multiplicative_expression '/' cast_expression{
		$$=type_check($1, $3, "/");
		//$$->loc = Quad.gentmp();
		$$->loc=current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "/", $3->loc);
	}
	| multiplicative_expression '%' cast_expression{
		$$=type_check($1, $3, "%");
		//$$->loc = Quad.gentmp();
		$$->loc=current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "%", $3->loc);
	}
	;

additive_expression
	: multiplicative_expression{
		$$=$1;
	}
	| additive_expression '+' multiplicative_expression{
		$$=type_check($1, $3, "+");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "+", $3->loc);
	}
	| additive_expression '-' multiplicative_expression{
		$$=type_check($1, $3, "-");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "-", $3->loc);
	}
	;

shift_expression
	: additive_expression{
		$$=$1;
	}
	| shift_expression LEFT_OP additive_expression{
		$$=type_check($1, $3, "<<");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "<<", $3->loc);
	}
	| shift_expression RIGHT_OP additive_expression{
		$$=type_check($1, $3, ">>");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, ">>", $3->loc);
	}
	;

relational_expression
	: shift_expression{
		$$=$1;
	}
	| relational_expression '<' shift_expression{
		$$=type_check($1, $3, "<");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		$$->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, $1->loc, "GOTO_L", $3->loc);
		Quad.emit($$->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		$$->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit($$->loc, "1", "ASSIGN", "=");

	}
	| relational_expression '>' shift_expression{
		$$=type_check($1, $3, ">");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		$$->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, $1->loc, "GOTO_G", $3->loc);
		Quad.emit($$->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		$$->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit($$->loc, "1", "ASSIGN", "=");

	}
	| relational_expression LE_OP shift_expression{
		$$=type_check($1, $3, "<=");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		$$->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, $1->loc, "GOTO_LE", $3->loc);
		Quad.emit($$->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		$$->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit($$->loc, "1", "ASSIGN", "=");
	}
	| relational_expression GE_OP shift_expression{
		$$=type_check($1, $3, ">=");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		$$->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, $1->loc, "GOTO_GE", $3->loc);
		Quad.emit($$->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		$$->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit($$->loc, "1", "ASSIGN", "=");
	}
	;

equality_expression
	: relational_expression{
		$$=$1;
	}
	| equality_expression EQ_OP relational_expression{
		$$=type_check($1, $3, "==");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		$$->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, $1->loc, "EQ", $3->loc);
		Quad.emit($$->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		$$->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit($$->loc, "1", "ASSIGN", "=");
	}
	| equality_expression NE_OP relational_expression{
		$$=type_check($1, $3, "!=");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		string res;
		stringstream temp1,temp;
		temp1<<(Quad.nextinstr+3);
		temp1>>res;
		$$->truelist = makelist(Quad.nextinstr);
		Quad.emit(res, $1->loc, "NE", $3->loc);
		Quad.emit($$->loc, "0", "ASSIGN", "=");
		temp<<(Quad.nextinstr+2);
		temp>>res;
		$$->falselist = makelist(Quad.nextinstr);
		Quad.emit(res," ", "GOTO", " ");
		Quad.emit($$->loc, "1", "ASSIGN", "=");
	}
	;

and_expression
	: equality_expression{
		$$=$1;
	}
	| and_expression '&' equality_expression{
		$$=type_check($1, $3, "&");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "&", $3->loc);
	}
	;

exclusive_or_expression
	: and_expression{
		$$=$1;
	}
	| exclusive_or_expression '^' and_expression{
		$$=type_check($1, $3, "^");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "^", $3->loc);
	}
	;

inclusive_or_expression
	: exclusive_or_expression{
		$$=$1;
	}
	| inclusive_or_expression '|' exclusive_or_expression{
		$$=type_check($1, $3, "|");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "!", $3->loc);
	}
	;

logical_and_expression
	: inclusive_or_expression{
		$$=$1;
	}
	| logical_and_expression AND_OP inclusive_or_expression{
		$$=type_check($1, $3, "&&");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "&&", $3->loc);
	}
	;

logical_or_expression
	: logical_and_expression{
		$$=$1;
	}
	| logical_or_expression OR_OP logical_and_expression{
		$$=type_check($1, $3, "||");
		//$$->loc = Quad.gentmp();
		$$->loc = current_ST->gentemp($$->b_type,$$->base_t,$$->pc);
		Quad.emit($$->loc, $1->loc, "||", $3->loc);
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

		symboldata *var=current_ST->lookup($1->loc);
		int size = var->type.array_list.size();
		int size2 = $3->array_list.size();
		int i,j;
		string result,temp;
		//cout<<"size2 "<<$3->array_list.size()<<"   "<<$3->loc<<endl;
		//-------for array-------------
		if(size && !size2){
			string new_str,old_str,xxx,t;

			old_str = $1->array_list[size - 1];
			//t = Quad.gentmp();
			t = current_ST->gentemp(type_int,type_int,0);
			//xxx = Quad.gentmp();
			xxx = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(t,var->type.array_list[size - 1],"ASSIGN","=");
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(new_str, $1->array_list[size - 1],"ASSIGN","=");
			old_str = new_str;
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			for(i=size-2;i>=0;i--){
				

				Quad.emit(new_str,$1->array_list[i],"*",t);
				Quad.emit(t,t,"*",var->type.array_list[i]);
				
				Quad.emit(xxx,new_str,"+",old_str);
				old_str = xxx;
			}
			Quad.emit(old_str, old_str, "*", "4");
			Quad.emit($1->loc, old_str, "ARR_RES", *$2);
		}
		else if(size2 && !size){
			var=current_ST->lookup($3->loc);
			string new_str,old_str,xxx,t;

			old_str = $3->array_list[size2 - 1];
			//t = Quad.gentmp();
			t = current_ST->gentemp(type_int,type_int,0);
			//xxx = Quad.gentmp();
			xxx = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(t,var->type.array_list[size2 - 1],"ASSIGN","=");
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(new_str, $3->array_list[size2 - 1],"ASSIGN","=");
			old_str = new_str;
			//new_str = Quad.gentmp();
			new_str = current_ST->gentemp(type_int,type_int,0);
			for(i=size2-2;i>=0;i--){
				Quad.emit(new_str,$3->array_list[i],"*",t);
				Quad.emit(t,t,"*",var->type.array_list[i]);
				
				Quad.emit(xxx,new_str,"+",old_str);
				old_str = xxx;
			}
			stringstream temp1;
			temp1<<$3->loc<<"["<<old_str<<"]";
			
			temp1>>temp;
			//xxx = Quad.gentmp();
			xxx = current_ST->gentemp(type_int,type_int,0);
			Quad.emit(old_str, old_str, "*", "4");
			Quad.emit(xxx,$3->loc,"ARR_ARG",old_str);
			Quad.emit($1->loc, xxx, "ASSIGN", *$2);

		}
		else{
			result = $1->loc;
			Quad.emit(result, $3->loc, "ASSIGN", *$2);
		}

	}
	;

assignment_operator
	: '='
	{	
		$$ = new string;
		*$$ = "=";
		//*$$ ="=";
		
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
            symboldata *var=current_ST->Symboltable[my_dec->name];

            if(var == NULL){
            	var = new symboldata;
            	var->nested_symboltable=NULL;
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	if(my_dec->pc > 0){
            		var->type.b_type = type_pointer;
            	}
            	var->type.b_type = type_current;
            	if(my_dec->array_list.size()){
            		var->type.b_type = type_array;
            		var->type.base_t = type_current;
            		var->type.array_list = my_dec->array_list;
            	}
            	var->offset = current_ST->offset;
            	//for(string p:my_dec->array_list )
            	//	size_now*=p;
            	var->size = size_now;
            	if(my_dec->initial_value!=NULL){
            		
            		expression *hunny = new expression;
            		hunny->b_type = my_dec->b_type;
            		hunny->base_t = my_dec->b_type;
            		hunny->pc = my_dec->pc;

            		type_check(hunny, my_dec->initial_value, "=");
					Quad.emit(var->name, my_dec->initial_value->loc, "ASSIGN", "=");          	
            	}


            	current_ST->insert(var);
            	continue;
            }
            else if(var->type.b_type == type_function || var->type.base_t == type_function){
            	var->name = my_dec->name;
            	var->type.pc = my_dec->pc;
            	var->type.b_type=type_function;
            	if(var->type.pc)
            		var->type.base_t = type_pointer;
            	var->type.return_type = type_current;	
            	if(my_dec->alist.size()){
            		//cout<<"helllo"<<endl;
            		var->type.base_t = type_array;
            		var->type.alist = my_dec->alist;
            	}
            	var->offset = current_ST->offset;
            	for(int p:my_dec->alist )
            		size_now*=p;
            	var->size = 0;
            	//current_ST->insert(var);
            	//current_ST->offset-=var->size;
            }
            else if(var!=NULL ){
            	bhej = var->name.c_str();
            	yyerror("already declared 1");
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
	: declarator '=' initializer
	{
		$$->initial_value = $3;
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
MMstruct:	
	{	
		if(flag==0){
			$$.temp = current_ST;
			$$.created = new symboltable;
			stack_ST.pb($$.created);
			symboldata *data = new symboldata;
			data->type.b_type = type_struct;
			char a[100] ;
			strcpy(a,current_name.c_str());
			char b[100];
			data->offset = current_ST->offset;
			current_ST->insert(data);
			data->nested_symboltable = $$.created;
			data->name = a;
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


struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER {current_name = *($2);} MMstruct '{'  struct_declaration_list '}' 
	{

		current_ST=$4.temp;
	}
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

        vector<decc *> temp= *$2;
        for(auto it: temp){
        	decc *my_dec = it;
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
            	if(my_dec->initial_value!=NULL){
            		
            		expression *hunny = new expression;
            		hunny->b_type = my_dec->b_type;
            		hunny->base_t = my_dec->b_type;
            		hunny->pc = my_dec->pc;

            		type_check(hunny, my_dec->initial_value, "=");
					          	
            	}


            	current_ST->insert(var);
            }
	            else {
	            	bhej = my_dec->name.c_str();
	            	yyerror("already declared 2");
	            }
        }

	}
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
	{
		$$=new vector<decc *>;
		$$->pb($1);
	}
	| struct_declarator_list ',' struct_declarator{
		$1->pb($3);
		$$=$1;
	}
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
		//cout<<"hello"<<endl;
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
	{
		$1->array_list.pb($3->loc);
		$$ = $1;
	}
	| direct_declarator '(' parameter_type_list ')'
	{
		
		$$=$1;
		tell=1;
		named=$1->name;
		$$->b_type = type_function;
		symboldata *funcdata=current_ST->lookup($$->name);
		Quad.emit($1->name,"","func_begin","");
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
	            	funcdata->nested_symboltable->arg_tot++;
	            }
	            else {
	            	bhej = my_dec->name.c_str();
	            	yyerror("already declared 3");
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
				//cout<<yes<<endl;
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
		if(tell==0)
		Quad.emit($1->name,"","func_ends","");

	}
	| direct_declarator '(' ')'
	{
		$$=$1;
		tell=1;
		named=$1->name;
		Quad.emit($1->name,"","func_begin","");
		$$->b_type = type_function;
		symboldata *funcdata=current_ST->lookup($$->name);
		if(funcdata==NULL){
			funcdata = new symboldata;
			funcdata->name = $1->name;
			funcdata->type.base_t = type_function;
			funcdata->offset = current_ST->offset;
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
		if(tell==0)
		Quad.emit($1->name,"","func_ends","");
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
		if($2->pc){
			$$->type.b_type = type_pointer;
			$$->type.base_t = $1;
			$$->type.pc = $2->pc;
		}
		
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
	| compound_statement{
		Quad.backpatch($1->nextlist, Quad.nextinstr);
	}
	| expression_statement{
		Quad.backpatch($1->nextlist, Quad.nextinstr);
	}
	| selection_statement{
		Quad.backpatch($1->nextlist, Quad.nextinstr);
	}
	| iteration_statement{
		Quad.backpatch($1->nextlist, Quad.nextinstr);

	}
	| jump_statement{
	}
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
			/*
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
			*/
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
		$$=new expression;
		$$->nextlist = $4->nextlist;
	}
	;

block_item_list
	: block_item
	| block_item_list M1 block_item{
		$$=new expression;
		Quad.backpatch($1->nextlist,$2->instr);
		$$->nextlist=$3->nextlist;
	}
	;

block_item
	: declaration{
		$$=new expression;
	}
	| statement{
		$$=new expression;
	}
	;

expression_statement
	: ';'
	| expression ';'{
		$$=new expression;
		$$=$1;
	}
	;

if
	: IF
	{
		flag=1;
		$$.temp = current_ST;
		/*
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
		*/
	}
	;

else
	: ELSE
	{
		flag=1;
		$$.temp = current_ST;
		/*
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
		*/	
	}
	;

selection_statement
	: if '(' expression ')' N M1 statement N {current_ST = $1.temp;} else M1 statement N {
		// cout<<"hello"<<endl;

		Quad.backpatch($5->nextlist,Quad.nextinstr); 
		current_ST = $10.temp;
		string tmp2;
		stringstream temp1,temp2;
		temp1<<$6->instr;
		temp2<<$11->instr;
		temp1>>tmp2;
		Quad.emit(tmp2, $3->loc , "NE", "0");
		temp2>>tmp2;
		Quad.emit(tmp2,"","GOTO","");
		$$= new expression;
		$$->nextlist = merge($7->nextlist, $8->nextlist);
		$$->nextlist = merge($$->nextlist, $12->nextlist);
		$$->nextlist = merge($$->nextlist, $13->nextlist);
	}
	| if '(' expression ')' N M1 statement N {
		//cout<<"world"<<endl;
		Quad.backpatch($5->nextlist,Quad.nextinstr); 
		string tmp2;
		stringstream temp1;
		temp1<<$6->instr;
		temp1>>tmp2;
		Quad.emit(tmp2, $3->loc , "NE", "0");
		current_ST = $1.temp;
		$$= new expression;
		$$->nextlist = merge($8->nextlist, $7->nextlist);

	}
	| SWITCH '(' expression ')' statement
	;

P
	:
	{
		$$.temp = current_ST;
		/*
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
		*/
		flag=1;
	}
	;

iteration_statement
	: WHILE {current_name="while"; } M '(' M1 expression ')' N M1 statement {
		current_ST = $3.temp;
		string tmp2;
		stringstream temp1,temp2;
		temp1<<$5->instr;
		temp1>>tmp2;
		Quad.emit(tmp2,"","GOTO","");
		Quad.backpatch($8->nextlist,Quad.nextinstr); 
		Quad.backpatch($10->nextlist,$5->instr); 
		temp2<<$9->instr;
		temp2>>tmp2;
		Quad.emit(tmp2, $6->loc , "NE", "0");
		$$=new expression;

	}
	| DO {current_name="do_while";} M statement WHILE '(' expression ')' ';' {current_ST = $3.temp;}
	| FOR P '(' expression_statement M1 expression_statement N M1 expression N ')' M1 statement 
	{//1  2  3  4                    5  6                    7 8  9          10 11 12 13
		current_ST = $2.temp;
		Quad.emit("","","GOTO","");
        Quad.backpatch(makelist(Quad.nextinstr-1), $8->instr );
        Quad.backpatch($7->nextlist,Quad.nextinstr);
        //cout<<"here 1\n";
        Quad.backpatch($6->truelist,Quad.nextinstr);
		Quad.backpatch($6->falselist,Quad.nextinstr);
		$7->falselist=makelist(Quad.nextinstr);
		//cout<<"\n\n\n "<<$6->loc<<"\n\n\n";
		//Quad.emit("",$6->loc,"EQ","0");
		//Quad.emit($6->loc,"0","ASSIGN","=");
		$7->truelist=makelist(Quad.nextinstr);
		//Quad.emit("","","GOTO","");
		$6->b_type=type_bool;
        //cout<<"here 1\n";
        Quad.backpatch($6->truelist,$12->instr);
        Quad.backpatch($13->nextlist,$8->instr);
        Quad.backpatch($10->nextlist,$5->instr);
        $$ = new expression;
        $$->nextlist = $6->falselist;
	}
	| {cout<<"";} FOR P '(' expression_statement expression_statement ')' statement  
	{	//cout<<"here 4\n";
		current_ST = $3.temp;
	}
	| {cout<<"";} FOR P '(' declaration expression_statement ')' statement 
	{	
		//cout<<"here 5\n";
		current_ST = $3.temp;
	}
	| {cout<<"";}  FOR P '(' declaration expression_statement expression ')' statement 
	{
		//cout<<"here 6\n";
		current_ST = $3.temp;
	}
	;


jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	{
		symboldata *funcdata = globalst.lookup(current_ST->name);
		//cout<<"\n\n\n"<<current_ST->name<<"\n\n\n";
		Quad.emit($2->loc,"", "RETURN","");
	}
	;

base
	: translation_unit
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

hunny
	:
	{
		tell=1;
	}
	;

external_declaration
	: function_definition compound_statement
	{
		Quad.emit(named,"","func_ends","");
		current_ST = hunny;
		tell=0;
	}
	| declaration
	{	
		if(tell==1)
			Quad.emit(named,"","func_ends","");
		tell=0;
	}
	;


function_definition
	: declaration_specifiers declarator declaration_list 
	| declaration_specifiers declarator 
	{
		flag=1;
		hunny = current_ST;
		symboldata *funcdata=current_ST->lookup($2->name);
		named = $2->name;
		//if not NULL do typecheck here
		if(funcdata==NULL){
			funcdata->nested_symboltable->defined = 1;
			funcdata->nested_symboltable->parent = &globalst;
			current_ST->insert(funcdata);
			current_ST->Symboltable[funcdata->name]= funcdata;
		}
		else{
			funcdata->nested_symboltable->parent = &globalst;
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
		symboldata *ret_val=new symboldata;
		ret_val->name = "RETURN_VAL";
		ret_val->type.b_type = $1;
		ret_val->type.pc = my_dec->pc;
		ret_val->offset = funcdata->nested_symboltable->offset;
		if($1==type_int)
			ret_val->size = 4;

		if(my_dec->pc)
			ret_val->type.base_t = type_pointer;

		funcdata->nested_symboltable->insert(ret_val);
		funcdata->nested_symboltable->Symboltable[ret_val->name]= ret_val;
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
		cout<<"name,"<<"type"<<","<<"size"<<","<<"offset"<<","<<"base_t"<<","<<"b_type"<<","<<"return_type"<<endl;

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
		else if(t->type.b_type==type_struct){
			cout<<"struct,";
		}
		else if(t->type.b_type==type_array){
			cout<<"array,";
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
		cout<<t->size<<","<<t->offset<<","<<t->type.base_t<<","<<t->type.b_type<<","<<t->type.return_type<<",";
		
		
		
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
				res->base_t= t2->base_t;
				res->pc=t2->pc;
				return res;
			}
			if(t2->b_type == type_int){
				res->b_type=t1->b_type;
				res->base_t=t1->base_t;
				res->pc=t1->pc;
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
			//cout<<"type    "<<t1->b_type<<","<<t1->base_t<<"   "<<t2->b_type<<","<<t2->base_t<<endl;

			if(t1->b_type==type_function && t2->b_type==type_function){
				yyerror("cannot assign function to function");
			}
			else if(t2->b_type==type_function){
				//cout<<"in func comparision\n";
				if(t1->pc!=t2->pc){
					yyerror("cannot assign function");
					//cout<<"out1 func comparision\n"; 
					return NULL;	
				}
				else if( t1->pc == 0 && t1->b_type != t2->return_type ){
					yyerror("cannot assign function"); 
					//cout<<"out2 func comparision\n";
					return NULL;	
				}
				else if( t1->pc == 0 && t1->b_type == t2->return_type ){
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->b_type;
					//cout<<"out3 func comparision\n";
					return res;
				}
				else if(t1->base_t != t2->return_type ){
					yyerror("cannot assign function"); 
					//cout<<"out4 func comparision\n";
					return NULL;	
				}
				else {
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->b_type;
					//cout<<"out5 func comparision\n";
					return res;
				}

			}
			else if(t1->b_type == type_array && t2->b_type!=type_array){
				if(t1->base_t == t2->b_type && t1->pc==t2->pc){
					res->pc=t2->pc;
					res->base_t=t2->base_t;
					res->b_type = t2->b_type;
					return res;
				}
			}
			else if(t1->b_type != type_array && t2->b_type==type_array){
				if(t2->base_t == t1->b_type && t1->pc==t2->pc){
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->b_type;
					return res;
				}
			}
			else if(t1->b_type == type_array && t2->b_type==type_array){
				if(t2->base_t == t1->b_type && t1->pc==t2->pc){
					res->pc=t1->pc;
					res->base_t=t1->base_t;
					res->b_type = t1->base_t;
					return res;
				}
			}



			else if(t1->b_type==t2->b_type && t1->base_t == t2->base_t &&  t1->pc== t2->pc ){
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
    tell=0;
    error_exists = 0;
    counter_temp=0;
    current_ST=&(globalst);
    bool failure = yyparse();  
    //int sz = Quad.a1.size();
    //cout<<"number if statements--->>"<<sz<<endl;
    // for(int i=0;i<sz;i++){
    //    cout<<i<<": "; Quad.a1[i].print();
   // }
    
   /* cout<<"----------------SYMBOL_TABLE----------------"<<endl;

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
    
    if(failure)
        printf("failure\n");
    else
        printf("success\n");

    //cout<<stack_ST.size(); 
    if(error_exists==0){
    	int sz=Quad.a1.size();
    	for(int i=0;i<sz;i++){
    		cout<<i<<": "; Quad.a1[i].print();
    	}
    }
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
    */
    generate();
}
