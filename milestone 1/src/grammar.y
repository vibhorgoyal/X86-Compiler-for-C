%{

#define NOTHING -1

#include "info.h"
#include <stdio.h>
#include <stdlib.h>

#define SYMTABSIZE 50
#define IDLENGTH 15
#define IDENTOFFSET 2;

enum ParseTreeNodeType {BASE,TRANSLATION_BLOCK};

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif


int evaulate(PARSE_TREE);
PARSE_TREE create_node(char *, int, PARSE_TREE *);
PARSE_TREE create_tnode(char *, char *);
void print_node(PARSE_TREE);
void print_file(PARSE_TREE);
struct symTabNode{
	char identifier[IDLENGTH];
};

typedef struct symTabNode SYMTABNODE;
typedef SYMTABNODE *SYMTABNODEPTR;

int currentSymTabSize=0;

extern int yylex();
void yyerror(const char* s);



%}

%start base;

%union {
  int intVal;
  char *str;
  struct treeNode *tVal;
}

%type <tVal> primary_expression constant enumeration_constant string generic_selection generic_assoc_list generic_association postfix_expression argument_expression_list unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator expression constant_expression declaration declaration_specifiers init_declarator_list init_declarator storage_class_specifier type_specifier struct_or_union_specifier struct_or_union struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator enum_specifier enumerator_list enumerator atomic_type_specifier type_qualifier function_specifier alignment_specifier declarator direct_declarator pointer type_qualifier_list parameter_type_list parameter_list parameter_declaration identifier_list type_name abstract_declarator direct_abstract_declarator initializer initializer_list designation designator_list designator static_assert_declaration statement labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement base translation_unit external_declaration function_definition declaration_list ;

%token<str> 	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token<str>	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token<str>	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token<str>	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token<str>	XOR_ASSIGN OR_ASSIGN
%token<str>	TYPEDEF_NAME ENUMERATION_CONSTANT

%token<str>	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token<str>	CONST RESTRICT VOLATILE
%token<str>	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token<str>	COMPLEX IMAGINARY 
%token<str>	STRUCT UNION ENUM ELLIPSIS

%token<str>	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token<str>	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%%

primary_expression
	: IDENTIFIER{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("IDENTIFIER", $1);
		$$ = create_node("primary_expression", 1, arr);
	}
	| constant{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("primary_expression", 1, arr);
	}
	| string{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("primary_expression", 1, arr);
	}
	| '(' expression ')'{
		PARSE_TREE arr[4];
		arr[0] = create_tnode("(", "(");
		arr[1] = $2;
		arr[2] = create_tnode(")", ")");
		$$ = create_node("primary_expression", 3, arr);
	}
	| generic_selection{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("primary_expression", 1, arr);
	}
	;

constant
	: I_CONSTANT{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("I_CONSTANT", $1);
		$$ = create_node("constant", 1, arr);
	}
	| F_CONSTANT{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("F_CONSTANT", $1);
		$$ = create_node("constant", 1, arr);
	}
	| ENUMERATION_CONSTANT{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("ENUMERATION_CONSTANT", $1);
		$$ = create_node("constant", 1, arr);
	}
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("IDENTIFIER", $1);
		$$ = create_node("enumeration_constant", 1, arr);
	}
	;

string
	: STRING_LITERAL{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("STRING_LITERAL", $1);
		$$ = create_node("string", 1, arr);
	}
	| FUNC_NAME{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("FUNC_NAME", $1);
		$$ = create_node("string", 1, arr);
	}
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'{
		PARSE_TREE arr[7];
		arr[0] = create_tnode("GENERIC", $1);
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3]= create_tnode(",", ",");;
		arr[4]= $5;
		arr[5]= create_tnode(")", ")");;
		$$ = create_node("generic_selection", 6, arr);
	}
	;

generic_assoc_list
	: generic_association{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("generic_assoc_list", 1, arr);
	}
	| generic_assoc_list ',' generic_association{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(",", ",");
		arr[2] = $3;
		$$ = create_node("generic_assoc_list", 3, arr);
	}
	;

generic_association
	: type_name ':' assignment_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(":", ":");
		arr[2] = $3;
		$$ = create_node("generic_association", 3, arr);
	}
	| DEFAULT ':' assignment_expression{
		PARSE_TREE arr[4];
		arr[0] = create_tnode("DEFAULT", $1);
		arr[1] = create_tnode(":", ":");
		arr[2] = $3;
		$$ = create_node("generic_association", 3, arr);
	}
	;

postfix_expression
	: primary_expression{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("postfix_expression", 1, arr);
	}
	| postfix_expression '[' expression ']'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = $3;
		arr[3] = create_tnode("[", "]");
		$$ = create_node("postfix_expression", 4, arr);
	}
	| postfix_expression '(' ')'{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("(", "(");
		arr[2] = create_tnode(")", ")");
		$$ = create_node("postfix_expression", 3, arr);
	}
	| postfix_expression '(' argument_expression_list ')'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3] = create_tnode(")", ")");
		$$ = create_node("postfix_expression", 4, arr);
	}
	| postfix_expression '.' IDENTIFIER{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(".", ".");
		arr[2] = create_tnode("IDENTIFIER", $3);
		$$ = create_node("postfix_expression", 3, arr);
	}
	| postfix_expression PTR_OP IDENTIFIER{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("PTR_OP", $2);
		arr[2] = create_tnode("IDENTIFIER", $3);
		$$ = create_node("postfix_expression", 3, arr);
	}
	| postfix_expression INC_OP{
		PARSE_TREE arr[3];
		arr[0]=$1;
		arr[1] = create_tnode("INC_OP", $2);
		$$ = create_node("postfix_expression", 2, arr);
	}
	| postfix_expression DEC_OP{
		PARSE_TREE arr[3];
		arr[0]=$1;
		arr[1] = create_tnode("DEC_OP", $2);
		$$ = create_node("postfix_expression", 2, arr);
	}
	| '(' type_name ')' '{' initializer_list '}'{
		PARSE_TREE arr[7];
		arr[0] = create_tnode("(", "(");
		arr[1] = $2;
		arr[2] = create_tnode(")", ")");
		arr[3] = create_tnode("{", "{");
		arr[4] = $5;
		arr[5] = create_tnode("}", "}");
		$$ = create_node("postfix_expression", 6, arr);
	}
	| '(' type_name ')' '{' initializer_list ',' '}'{
		PARSE_TREE arr[8];
		arr[0] = create_tnode("(", "(");
		arr[1] = $2;
		arr[2] = create_tnode(")", ")");
		arr[3] = create_tnode("{", "{");
		arr[4] = $5;
		arr[5] = create_tnode(",", ",");
		arr[6] = create_tnode("}", "}");
		$$ = create_node("postfix_expression", 7, arr);
	}
	;

argument_expression_list
	: assignment_expression{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("argument_expression_list", 1, arr);
	}
	| argument_expression_list ',' assignment_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(",", ",");
		arr[2] = $3 ;
		$$ = create_node("argument_expression_list", 3, arr);
	}
	;

unary_expression
	: postfix_expression{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("unary_expression", 1, arr);
	}
	| INC_OP unary_expression{
		PARSE_TREE arr[3];
		arr[1]=$2;
		arr[0] = create_tnode("INC_OP", $1);
		$$ = create_node("unary_expression", 2, arr);
	}
	| DEC_OP unary_expression{
		PARSE_TREE arr[3];
		arr[1]=$2;
		arr[0] = create_tnode("DEC_OP", $1);
		$$ = create_node("unary_expression", 2, arr);
	}
	| unary_operator cast_expression{
		PARSE_TREE arr[3];
		arr[1]=$2;
		arr[0] = $1;
		$$ = create_node("unary_expression", 2, arr);
	}
	| SIZEOF unary_expression{
		PARSE_TREE arr[3];
		arr[1]=$2;
		arr[0] = create_tnode("SIZEOF", $1);
		$$ = create_node("unary_expression", 2, arr);
	}
	| SIZEOF '(' type_name ')'{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("SIZEOF", $1);
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3] = create_tnode(")", ")");
		$$ = create_node("unary_expression", 4, arr);
	}
	| ALIGNOF '(' type_name ')'{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ALIGNOF", $1);
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3] = create_tnode(")", ")");
		$$ = create_node("unary_expression", 4, arr);
	}
	;

unary_operator
	: '&'{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("&", "&");
		$$ = create_node("unary_operator", 1, arr);
	}
	| '*'{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("*", "*");
		$$ = create_node("unary_operator", 1, arr);
	}
	| '+'{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("+", "+");
		$$ = create_node("unary_operator", 1, arr);
	}
	| '-'{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("-", "-");
		$$ = create_node("unary_operator", 1, arr);
	}
	| '~'{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("~", "~");
		$$ = create_node("unary_operator", 1, arr);
	}
	| '!'{
		PARSE_TREE arr[2];
		arr[0]=create_tnode("!", "!");
		$$ = create_node("unary_operator", 1, arr);
	}
	;

cast_expression
	: unary_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("cast_expression", 1, arr);
	}
	| '(' type_name ')' cast_expression{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("(", "(");
		arr[1] = $2;
		arr[2] = create_tnode(")", ")");
		arr[3] = $4;
		$$ = create_node("cast_expression", 4, arr);
	}
	;

multiplicative_expression
	: cast_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("multiplicative_expression", 1, arr);
	}
	| multiplicative_expression '*' cast_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("*", "*");
		arr[2] = $3;
		$$ = create_node("multiplicative_expression", 3, arr);
	}
	| multiplicative_expression '/' cast_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("/", "/");
		arr[2] = $3;
		$$ = create_node("multiplicative_expression", 3, arr);
	}
	| multiplicative_expression '%' cast_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("%", "%");
		arr[2] = $3;
		$$ = create_node("multiplicative_expression", 3, arr);
	}
	;

additive_expression
	: multiplicative_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("additive_expression", 1, arr);
	}
	| additive_expression '+' multiplicative_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("+", "+");
		arr[2] = $3;
		$$ = create_node("additive_expression", 3, arr);
	}
	| additive_expression '-' multiplicative_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("-", "-");
		arr[2] = $3;
		$$ = create_node("additive_expression", 3, arr);
	}
	;

shift_expression
	: additive_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("shift_expression", 1, arr);
	}
	| shift_expression LEFT_OP additive_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("LEFT_OP", $2);
		arr[2] = $3;
		$$ = create_node("shift_expression", 3, arr);
	}
	| shift_expression RIGHT_OP additive_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("RIGHT_OP", $2);
		arr[2] = $3;
		$$ = create_node("shift_expression", 3, arr);
	}
	;

relational_expression
	: shift_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("relational_expression", 1, arr);
	}
	| relational_expression '<' shift_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("<", "<");
		arr[2] = $3;
		$$ = create_node("relational_expression", 3, arr);
	}
	| relational_expression '>' shift_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(">", ">");
		arr[2] = $3;
		$$ = create_node("relational_expression", 3, arr);
	}
	| relational_expression LE_OP shift_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("LE_OP", $2);
		arr[2] = $3;
		$$ = create_node("relational_expression", 3, arr);
	}
	| relational_expression GE_OP shift_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("GE_OP", $2);
		arr[2] = $3;
		$$ = create_node("relational_expression", 3, arr);
	}
	;

equality_expression
	: relational_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("equality_expression", 1, arr);
	}
	| equality_expression EQ_OP relational_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("EQ_OP", $2);
		arr[2] = $3;
		$$ = create_node("equality_expression", 3, arr);
	}
	| equality_expression NE_OP relational_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("NE_OP", $2);
		arr[2] = $3;
		$$ = create_node("equality_expression", 3, arr);
	}
	;

and_expression
	: equality_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("and_expression", 1, arr);
	}
	| and_expression '&' equality_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("&", "&");
		arr[2] = $3;
		$$ = create_node("and_expression", 3, arr);
	}
	;

exclusive_or_expression
	: and_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("exclusive_or_expression", 1, arr);
	}
	| exclusive_or_expression '^' and_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("^", "^");
		arr[2] = $3;
		$$ = create_node("exclusive_or_expression", 3, arr);
	}
	;

inclusive_or_expression
	: exclusive_or_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("inclusive_or_expression", 1, arr);
	}
	| inclusive_or_expression '|' exclusive_or_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("|", "|");
		arr[2] = $3;
		$$ = create_node("inclusive_or_expression", 3, arr);
	}
	;

logical_and_expression
	: inclusive_or_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("logical_and_expression", 1, arr);
	}
	| logical_and_expression AND_OP inclusive_or_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("AND_OP", $2);
		arr[2] = $3;
		$$ = create_node("logical_and_expression", 3, arr);
	}
	;

logical_or_expression
	: logical_and_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("logical_or_expression", 1, arr);
	}
	| logical_or_expression OR_OP logical_and_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("OR_OP", $2);
		arr[2] = $3;
		$$ = create_node("logical_or_expression", 3, arr);
	}
	;

conditional_expression
	: logical_or_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("conditional_expression", 1, arr);
	}
	| logical_or_expression '?' expression ':' conditional_expression{
		PARSE_TREE arr[6];
		arr[0] = $1;
		arr[1] = create_tnode("?", "?");
		arr[2] = $3;
		arr[3] = create_tnode(":", ":");
		arr[4] = $5;
		$$ = create_node("conditional_expression", 5, arr);
	}
	;

assignment_expression
	: conditional_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("assignment_expression", 1, arr);
	}
	| unary_expression assignment_operator assignment_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = $2;
		arr[2] = $3;
		$$ = create_node("assignment_expression", 3, arr);
	}
	;

assignment_operator
	: '='{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("=", "=");
		$$ = create_node("assignment_operator", 1, arr);
	}
	| MUL_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("MUL_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| DIV_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("DIV_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| MOD_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("MOD_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| ADD_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("ADD_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| SUB_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("SUB_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| LEFT_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("LEFT_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| RIGHT_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("RIGHT_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| AND_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("AND_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| XOR_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("XOR_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	| OR_ASSIGN{
		PARSE_TREE arr[2];
		arr[0]= create_tnode("OR_ASSIGN", $1);
		$$ = create_node("assignment_operator", 1, arr);
	}
	;

expression
	: assignment_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("assignment_expression", 1, arr);
	}
	| expression ',' assignment_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(",", ",");
		arr[2] = $3;
		$$ = create_node("assignment_expression", 3, arr);
	}
	;

constant_expression
	: conditional_expression{
		PARSE_TREE arr[2];
		arr[0]= $1;
		$$ = create_node("constant_expression", 1, arr);
	}	/* with constraints */
	;

declaration
	: declaration_specifiers ';'{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = create_tnode(";", ";");
		$$ = create_node("declaration", 2, arr);
	}
	| declaration_specifiers init_declarator_list ';'{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = $2;
		arr[2] = create_tnode(";", ";");
		$$ = create_node("declaration", 3, arr);
	}
	| static_assert_declaration{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration", 1, arr);
	}
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("declaration_specifiers", 2, arr);
	}
	| storage_class_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration_specifiers", 1, arr);
	}
	| type_specifier declaration_specifiers{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("declaration_specifiers", 2, arr);
	}
	| type_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration_specifiers", 1, arr);
	}
	| type_qualifier declaration_specifiers{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("declaration_specifiers", 2, arr);
	}
	| type_qualifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration_specifiers", 1, arr);
	}
	| function_specifier declaration_specifiers{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("declaration_specifiers", 2, arr);
	}
	| function_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration_specifiers", 1, arr);
	}
	| alignment_specifier declaration_specifiers{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("declaration_specifiers", 2, arr);
	}
	| alignment_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration_specifiers", 1, arr);
	}
	;

init_declarator_list
	: init_declarator{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("init_declarator_list", 1, arr);
	}
	| init_declarator_list ',' init_declarator{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(",", ",");
		arr[2] = $3;
		$$ = create_node("init_declarator_list", 3, arr);
	}
	;

init_declarator
	: declarator '=' initializer{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("=", "=");
		arr[2] = $3;
		$$ = create_node("init_declarator", 3, arr);
	}
	| declarator{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("init_declarator", 1, arr);
	}
	;

storage_class_specifier
	: TYPEDEF{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("TYPEDEF", $1);
		$$ = create_node("storage_class_specifier", 1, arr);
	}
	| EXTERN{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("EXTERN", $1);
		$$ = create_node("storage_class_specifier", 1, arr);
	}
	| STATIC{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("STATIC", $1);
		$$ = create_node("storage_class_specifier", 1, arr);
	}
	| THREAD_LOCAL{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("THREAD_LOCAL", $1);
		$$ = create_node("storage_class_specifier", 1, arr);
	}
	| AUTO{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("AUTO", $1);
		$$ = create_node("storage_class_specifier", 1, arr);
	}
	| REGISTER{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("REGISTER", $1);
		$$ = create_node("storage_class_specifier", 1, arr);
	}
	;

type_specifier
	: VOID{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("VOID", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| CHAR{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("CHAR", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| SHORT{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("SHORT", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| INT {
		PARSE_TREE arr[2];
		arr[0] = create_tnode("INT", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| LONG{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("LONG", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| FLOAT{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("FLOAT", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| DOUBLE{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("DOUBLE", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| SIGNED{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("SIGNED", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| UNSIGNED{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("UNSIGNED", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| BOOL{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("BOOL", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| COMPLEX{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("COMPLEX", $1);
		$$ = create_node("type_specifier", 1, arr);
	}
	| IMAGINARY{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("IMAGINARY", $1);
		$$ = create_node("type_specifier", 1, arr);
	}	  	/* non-mandated extension */
	| atomic_type_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("type_specifier", 1, arr);
	}
	| struct_or_union_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("type_specifier", 1, arr);
	}
	| enum_specifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("type_specifier", 1, arr);
	}
	| TYPEDEF_NAME{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("TYPEDEF_NAME", $1);
		$$ = create_node("type_specifier", 1, arr);
	}		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("{", "{");
		arr[2] = $3;
		arr[3] = create_tnode("}", "}");
		$$ = create_node("struct_or_union_specifier", 4, arr);
	}
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'{
		PARSE_TREE arr[6];
		arr[0] = $1;
		arr[1] = create_tnode("IDENTIFIER", $2);
		arr[2] = create_tnode("{", "{");
		arr[3] = $4;
		arr[4] = create_tnode("}", "}");
		$$ = create_node("struct_or_union_specifier", 5, arr);
	}
	| struct_or_union IDENTIFIER{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = create_tnode("IDENTIFIER", $2);
		$$ = create_node("struct_or_union_specifier", 2, arr);
	}
	;

struct_or_union
	: STRUCT{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("STRUCT", $1);
		$$ = create_node("struct_or_union", 1, arr);
	}
	| UNION{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("UNION", $1);
		$$ = create_node("struct_or_union", 1, arr);
	}
	;

struct_declaration_list
	: struct_declaration{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("struct_declaration_list", 1, arr);
	}
	| struct_declaration_list struct_declaration{
		PARSE_TREE arr[3];
		arr[0]=$1;arr[1]=$2;
		$$ = create_node("struct_declaration_list", 2, arr);
	}
	;

struct_declaration
	: specifier_qualifier_list ';'{
		PARSE_TREE arr[3];
		arr[0]=$1;
		arr[1]=create_tnode(";", ";");
		$$ = create_node("struct_declaration", 2, arr);
	}
	| specifier_qualifier_list struct_declarator_list ';'{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = $2;
 		arr[2]=create_tnode(";", ";");
		$$ = create_node("struct_declaration", 3, arr);
	}
	| static_assert_declaration{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("struct_declaration", 1, arr);
	}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list{
		PARSE_TREE arr[3];
		arr[0]=$1;arr[1]=$2;
		$$ = create_node("specifier_qualifier_list", 2, arr);
	}
	| type_specifier{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("specifier_qualifier_list", 1, arr);
	}
	| type_qualifier specifier_qualifier_list{
		PARSE_TREE arr[3];
		arr[0]=$1;arr[1]=$2;
		$$ = create_node("specifier_qualifier_list", 2, arr);
	}
	| type_qualifier{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("specifier_qualifier_list", 1, arr);
	}
	;

struct_declarator_list
	: struct_declarator{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("struct_declarator_list", 1, arr);
	}
	| struct_declarator_list ',' struct_declarator{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[2] = $3;
 		arr[1]=create_tnode(",", ",");
		$$ = create_node("struct_declarator_list", 3, arr);
	}
	;

struct_declarator
	: ':' constant_expression{
		PARSE_TREE arr[3];
		arr[1] = $2;
 		arr[0]=create_tnode(":", ":");
		$$ = create_node("struct_declarator", 2, arr);
	}
	| declarator ':' constant_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[2] = $3;
 		arr[1]=create_tnode(":", ":");
		$$ = create_node("struct_declarator", 3, arr);
	}
	| declarator{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("struct_declarator", 1, arr);
	}
	;

enum_specifier
	: ENUM '{' enumerator_list '}'{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ENUM", $1);
		arr[1] = create_tnode("{", "{");
		arr[2] = $3;
		arr[3] = create_tnode("}", "}");
		$$ = create_node("enum_specifier", 4, arr);
	}
	| ENUM '{' enumerator_list ',' '}'{
		PARSE_TREE arr[6];
		arr[0] = create_tnode("ENUM", $1);
		arr[1] = create_tnode("{", "{");
		arr[2] = $3;
		arr[3] = create_tnode(",", ",");
		arr[4] = create_tnode("}", "}");
		$$ = create_node("enum_specifier", 5, arr);
	}
	| ENUM IDENTIFIER '{' enumerator_list '}'{
		PARSE_TREE arr[6];
		arr[0] = create_tnode("ENUM", $1);
		arr[1] = create_tnode("IDENTIFIER", $2);
		arr[2] = create_tnode("{", "{");
		arr[3] = $4;
		arr[4] = create_tnode("}", "}");
		$$ = create_node("enum_specifier", 5, arr);
	}
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'{
		PARSE_TREE arr[7];
		arr[0] = create_tnode("ENUM", $1);
		arr[1] = create_tnode("IDENTIFIER", $2);
		arr[2] = create_tnode("{", "{");
		arr[3] = $4;
		arr[4] = create_tnode(",", ",");
		arr[5] = create_tnode("}", "}");
		$$ = create_node("enum_specifier", 6, arr);
	}
	| ENUM IDENTIFIER{
		PARSE_TREE arr[3];
		arr[0] = create_tnode("ENUM", $1);
		arr[1] = create_tnode("IDENTIFIER", $2);
		$$ = create_node("enum_specifier", 2, arr);
	}
	;

enumerator_list
	: enumerator{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("enumerator_list", 1, arr);
	}
	| enumerator_list ',' enumerator{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[2] = $3;
 		arr[1]=create_tnode(",", ",");
		$$ = create_node("enumerator_list", 3, arr);
	}
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[2] = $3;
 		arr[1]=create_tnode("=", "=");
		$$ = create_node("enumerator", 3, arr);
	}
	| enumeration_constant{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("enumerator", 1, arr);
	}
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ATOMIC", $1);
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3] = create_tnode(")", ")");
		$$ = create_node("atomic_type_specifier", 4, arr);
	}
	;

type_qualifier
	: CONST{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("CONST", $1);
		$$ = create_node("type_qualifier", 1, arr);
	}
	| RESTRICT{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("RESTRICT", $1);
		$$ = create_node("type_qualifier", 1, arr);
	}
	| VOLATILE{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("VOLATILE", $1);
		$$ = create_node("type_qualifier", 1, arr);
	}
	| ATOMIC{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("ATOMIC", $1);
		$$ = create_node("type_qualifier", 1, arr);
	}
	;

function_specifier
	: INLINE{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("INLINE", $1);
		$$ = create_node("function_specifier", 1, arr);
	}
	| NORETURN{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("NORETURN", $1);
		$$ = create_node("function_specifier", 1, arr);
	}
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ALIGNAS", $1);
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3] = create_tnode(")", ")");
		$$ = create_node("alignment_specifier", 4, arr);
	}
	| ALIGNAS '(' constant_expression ')'{
		PARSE_TREE arr[5];
		arr[0] = create_tnode("ALIGNAS", $1);
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
		arr[3] = create_tnode(")", ")");
		$$ = create_node("alignment_specifier", 4, arr);
	}
	;

declarator
	: pointer direct_declarator{
		PARSE_TREE arr[2];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("declarator", 2, arr);
	}
	| direct_declarator{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declarator", 1, arr);
	}
	;

direct_declarator
	: IDENTIFIER{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("IDENTIFIER", $1);
		$$ = create_node("direct_declarator", 1, arr);
	}
	| '(' declarator ')'{
		PARSE_TREE arr[4];
		arr[0] = create_tnode("(", "(");
		arr[1] = $2;
 		arr[2]=create_tnode(")", ")");
		$$ = create_node("direct_declarator", 3, arr);
	}
	| direct_declarator '[' ']'{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
 		arr[2] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 3, arr);
	}
	| direct_declarator '[' '*' ']'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = create_tnode("*", "*");
 		arr[3] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 4, arr);
	}
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'{
		PARSE_TREE arr[7];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = create_tnode("STATIC", $3);
		arr[3] = $4;
		arr[4] = $5;
 		arr[5] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 6, arr);
	}
	| direct_declarator '[' STATIC assignment_expression ']'{
		PARSE_TREE arr[6];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = create_tnode("STATIC", $3);
		arr[3] = $4;
 		arr[4] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 5, arr);
	}
	| direct_declarator '[' type_qualifier_list '*' ']'{
		PARSE_TREE arr[6];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = $3;
		arr[3] = create_tnode("*", "*");
 		arr[4] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 5, arr);
	}
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'{
		PARSE_TREE arr[7];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = $3;
		arr[3] = create_tnode("STATIC", $4);
		arr[4] = $5;
 		arr[5] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 6, arr);
	}
	| direct_declarator '[' type_qualifier_list assignment_expression ']'{
		PARSE_TREE arr[6];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = $3;
		arr[3] = $4;
 		arr[4] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 5, arr);
	}
	| direct_declarator '[' type_qualifier_list ']'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = $3;
 		arr[3] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 4, arr);
	}
	| direct_declarator '[' assignment_expression ']'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("[", "[");
		arr[2] = $3;
 		arr[3] = create_tnode("]", "]");
		$$ = create_node("direct_declarator", 4, arr);
	}
	| direct_declarator '(' parameter_type_list ')'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
 		arr[3] = create_tnode(")", ")");
		$$ = create_node("direct_declarator", 4, arr);
	}
	| direct_declarator '(' ')'{
		PARSE_TREE arr[4];
		arr[1] = create_tnode("(", "(");
		arr[0] = $1;
 		arr[2]=create_tnode(")", ")");
		$$ = create_node("direct_declarator", 3, arr);
	}
	| direct_declarator '(' identifier_list ')'{
		PARSE_TREE arr[5];
		arr[0] = $1;
		arr[1] = create_tnode("(", "(");
		arr[2] = $3;
 		arr[3] = create_tnode(")", ")");
		$$ = create_node("direct_declarator", 4, arr);
	}
	;

pointer
	: '*' type_qualifier_list pointer{
		PARSE_TREE arr[4];
		arr[0] = create_tnode("*", "*");
		arr[1] = $2;
		arr[2] = $3;
		$$ = create_node("pointer", 3, arr);
	}
	| '*' type_qualifier_list{
		PARSE_TREE arr[3];
		arr[0] = create_tnode("*", "*");
		arr[1] = $2;
		$$ = create_node("pointer", 2, arr);
	}
	| '*' pointer{
		PARSE_TREE arr[3];
		arr[0] = create_tnode("*", "*");
		arr[1] = $2;
		$$ = create_node("pointer", 2, arr);
	}
	| '*'{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("*", "*");
		$$ = create_node("pointer", 1, arr);
	}
	;

type_qualifier_list
	: type_qualifier{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("type_qualifier_list", 1, arr);
	}
	| type_qualifier_list type_qualifier{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("type_qualifier_list", 2, arr);
	}
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS{
		PARSE_TREE arr[4];
		arr[1] = create_tnode(",", ",");
		arr[0] = $1;
		arr[2] = create_tnode("ELLIPSIS", $3);
		$$ = create_node("parameter_type_list", 3, arr);
	}
	| parameter_list{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("parameter_type_list", 1, arr);
	}
	;

parameter_list
	: parameter_declaration{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("parameter_list", 1, arr);
	}
	| parameter_list ',' parameter_declaration{
		PARSE_TREE arr[4];
		arr[1] = create_tnode(",", ",");
		arr[0] = $1;
		arr[2] = $3;
		$$ = create_node("parameter_list", 3, arr);
	}
	;

parameter_declaration
	: declaration_specifiers declarator{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("parameter_declaration", 2, arr);
	}
	| declaration_specifiers abstract_declarator{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("parameter_declaration", 2, arr);
	}
	| declaration_specifiers{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("parameter_declaration", 1, arr);
	}
	;

identifier_list
	: IDENTIFIER{
		PARSE_TREE arr[2];
		arr[0] = create_tnode("IDENTIFIER", $1);
		$$ = create_node("identifier_list", 1, arr);
	}
	| identifier_list ',' IDENTIFIER{
		PARSE_TREE arr[4];
		arr[0] = $1;
		arr[1] = create_tnode(",", ",");
		arr[2] = create_tnode("IDENTIFIER", $3);
		$$ = create_node("identifier_list", 3, arr);
	}
	;

type_name
	: specifier_qualifier_list abstract_declarator{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("type_name", 2, arr);
	}
	| specifier_qualifier_list{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("type_name", 1, arr);
	}
	;

abstract_declarator
	: pointer direct_abstract_declarator{
		PARSE_TREE arr[3];
		arr[0] = $1;
		arr[1] = $2;
		$$ = create_node("abstract_declarator", 2, arr);
	}
	| pointer{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("abstract_declarator", 1, arr);
	}
	| direct_abstract_declarator{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("abstract_declarator", 1, arr);
	}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("(","(");
    arr[1]=$2;
    arr[2]=create_tnode(")",")");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| '[' ']'{
  	PARSE_TREE arr[3];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 2, arr);
	}
	| '[' '*' ']'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("*","*");
    arr[2]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| '[' STATIC type_qualifier_list assignment_expression ']'{
  	PARSE_TREE arr[6];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("STATIC",$2);
    arr[2]=$3;
    arr[3]=$4;
    arr[4]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 5, arr);
	}
	| '[' STATIC assignment_expression ']'{
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("[","[");
    arr[1]=create_tnode("STATIC",$2);
    arr[2]=$3;
    arr[4]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 4, arr);
	}
	| '[' type_qualifier_list STATIC assignment_expression ']'{
  	PARSE_TREE arr[6];
    arr[0]=create_tnode("[","[");
    arr[1]=$2;
    arr[2]=create_tnode("STATIC",$3);
    arr[3]=$4;
    arr[4]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 5, arr);
	}
	| '[' type_qualifier_list assignment_expression ']'{
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("[","[");
    arr[1]=$2;
    arr[2]=$3;
    arr[4]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 4, arr);
	}
	| '[' type_qualifier_list ']'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=$2;
    arr[2]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| '[' assignment_expression ']'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=$2;
    arr[2]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| direct_abstract_declarator '[' ']'{
  	PARSE_TREE arr[4];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| direct_abstract_declarator '[' '*' ']'{
  	PARSE_TREE arr[5];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("*","*");
    arr[3]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 4, arr);
	}
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'{
  	PARSE_TREE arr[7];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("STATIC",$3);
    arr[3]=$4;
    arr[4]=$5;
    arr[5]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 6, arr);
	}
	| direct_abstract_declarator '[' STATIC assignment_expression ']'{
  	PARSE_TREE arr[6];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=create_tnode("STATIC",$3);
    arr[3]=$4;
    arr[4]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 5, arr);
	}
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'{
  	PARSE_TREE arr[6];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=$3;
    arr[3]=$4;
    arr[4]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 5, arr);
	}
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'{
  	PARSE_TREE arr[7];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=$3;
    arr[3]=create_tnode("STATIC",$4);
    arr[4]=$5;
    arr[5]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 6, arr);
	}
	| direct_abstract_declarator '[' type_qualifier_list ']'{
  	PARSE_TREE arr[5];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=$3;
    arr[3]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 4, arr);
	}
	| direct_abstract_declarator '[' assignment_expression ']'{
  	PARSE_TREE arr[5];
    arr[0]=$1;
    arr[1]=create_tnode("[","[");
    arr[2]=$3;
    arr[3]=create_tnode("]","]");
		$$ = create_node("direct_abstract_declarator", 4, arr);
	}
	| '(' ')'{
  	PARSE_TREE arr[3];
    arr[0]=create_tnode("(","(");
    arr[1]=create_tnode(")",")");
		$$ = create_node("direct_abstract_declarator", 2, arr);
	}
	| '(' parameter_type_list ')'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("(","(");
    arr[1]=$2;
    arr[2]=create_tnode(")",")");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| direct_abstract_declarator '(' ')'{
  	PARSE_TREE arr[4];
  	arr[0]=$1;
    arr[1]=create_tnode("(","(");
    arr[2]=create_tnode(")",")");
		$$ = create_node("direct_abstract_declarator", 3, arr);
	}
	| direct_abstract_declarator '(' parameter_type_list ')'{
  	PARSE_TREE arr[5];
  	arr[0]=$1;
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=create_tnode(")",")");
		$$ = create_node("direct_abstract_declarator", 4, arr);
	}
	;

initializer
	: '{' initializer_list '}'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("{","{");
    arr[1]=$2;
    arr[2]=create_tnode("}","}");
		$$ = create_node("initializer", 3, arr);
	}
	| '{' initializer_list ',' '}'{
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("{","{");
    arr[1]=$2;
    arr[2]=create_tnode(",",",");
    arr[3]=create_tnode("}","}");
		$$ = create_node("initializer", 4, arr);
	}
	| assignment_expression{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("initializer", 1, arr);
	}
	;


initializer_list
	: designation initializer{
  	PARSE_TREE arr[3];
    arr[0]=$1;
    arr[1]=$2;
		$$ = create_node("initializer_list", 2, arr);
	}
	| initializer{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("initializer_list", 1, arr);
	}
	| initializer_list ',' designation initializer{
  	PARSE_TREE arr[4];
    arr[0]=$1;
    arr[1]=create_tnode(",",",");
    arr[2]=$3;
		$$ = create_node("initializer_list", 3, arr);
	}
	| initializer_list ',' initializer{
  	PARSE_TREE arr[4];
    arr[0]=$1;
    arr[1]=create_tnode(",",",");
    arr[2]=$3;
		$$ = create_node("initializer_list", 3, arr);
	}
	;

designation
	: designator_list '='{
  	PARSE_TREE arr[3];
    arr[0]=$1;
    arr[1]=create_tnode("=","=");
		$$ = create_node("designation", 2, arr);
	}
	;

designator_list
	: designator{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("designator_list", 1, arr);
	}
	| designator_list designator{
  	PARSE_TREE arr[3];
    arr[0]=$1;
    arr[1]=$2;
		$$ = create_node("designator_list", 2, arr);
	}
	;

designator
	: '[' constant_expression ']'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("[","[");
    arr[1]=$2;
    arr[2]=create_tnode("]","]");
		$$ = create_node("designator", 3, arr);
	}
	| '.' IDENTIFIER{
  	PARSE_TREE arr[3];
    arr[0]=create_tnode(".",".");
    arr[1]=create_tnode("IDENTIFIER",$2);
		$$ = create_node("designator", 2, arr);
	}
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'{
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("STATIC_ASSERT",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=create_tnode(",",",");
    arr[4]=create_tnode("STRING_LITERAL",$5);
    arr[5]=create_tnode(")",")");
    arr[6]=create_tnode(";",";");
		$$ = create_node("static_assert_declaration", 7, arr);
	}
	;

statement
	: labeled_statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("statement", 1, arr);
	}
	| compound_statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("statement", 1, arr);
	}
	| expression_statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("statement", 1, arr);
	}
	| selection_statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("statement", 1, arr);
	}
	| iteration_statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("statement", 1, arr);
	}
	| jump_statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("statement", 1, arr);
	}
	;

labeled_statement
	: IDENTIFIER ':' statement{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("IDENTIFIER",$1);
    arr[1]=create_tnode(":",":");
    arr[2]=$3;
		$$ = create_node("labeled_statement", 3, arr);
	}
	| CASE constant_expression ':' statement{
  	PARSE_TREE arr[5];
    arr[0]=create_tnode("CASE",$1);
    arr[1]=$2;
    arr[2]=create_tnode(":",":");
    arr[3]=$4;
		$$ = create_node("labeled_statement", 4, arr);
	}
	| DEFAULT ':' statement{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("DEFAULT",$1);
    arr[1]=create_tnode(":",":");
    arr[2]=$3;
		$$ = create_node("labeled_statement", 3, arr);
	}
	;

compound_statement
	: '{' '}'{
  	PARSE_TREE arr[3];
    arr[0]=create_tnode("{","{");
    arr[1]=create_tnode("}","}");
		$$ = create_node("compound_statement", 2, arr);
	}
	| '{'  block_item_list '}'{
  	PARSE_TREE arr[4];
    arr[0]=create_tnode("{","{");
    arr[1]=$2;
    arr[2]=create_tnode("}","}");
		$$ = create_node("compound_statement", 3, arr);
	}
	;

block_item_list
	: block_item{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("block_item_list", 1, arr);
	}
	| block_item_list block_item{
  	PARSE_TREE arr[3];
    arr[0]=$1;
    arr[1]=$2;
		$$ = create_node("block_item_list", 2, arr);
	}
	;

block_item
	: declaration{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("block_item", 1, arr);
	}
	| statement{
  	PARSE_TREE arr[2];
    arr[0]=$1;
		$$ = create_node("block_item", 1, arr);
	}
	;

expression_statement
	: ';'{
  	PARSE_TREE arr[2];
		arr[0]=create_tnode(";",";");
		$$ = create_node("expression_statement", 1, arr);
	}
	| expression ';'{
  	PARSE_TREE arr[3];
    arr[0]=$1;
		arr[1]=create_tnode(";",";");
		$$ = create_node("expression_statement", 2, arr);
	}
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement{
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("IF",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=create_tnode(")",")");
    arr[4]=$5;
    arr[5]=create_tnode("ELSE",$6);
    arr[6]=$7;
		$$ = create_node("selection_statement", 7, arr);
	}
	| IF '(' expression ')' statement{
  	PARSE_TREE arr[6];
		arr[0]=create_tnode("IF",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=create_tnode(")",")");
    arr[4]=$5;
		$$ = create_node("selection_statement", 5, arr);
	}
	| SWITCH '(' expression ')' statement{
  	PARSE_TREE arr[6];
		arr[0]=create_tnode("SWITCH",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=create_tnode(")",")");
    arr[4]=$5;
		$$ = create_node("selection_statement", 5, arr);
	}
	;

iteration_statement
	: WHILE '(' expression ')' statement{
		PARSE_TREE arr[6];
		arr[0]=create_tnode("WHILE",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=create_tnode(")",")");
    arr[4]=$5;
		$$ = create_node("iteration_statement", 5, arr);
	}
	| DO statement WHILE '(' expression ')' ';'{
		PARSE_TREE arr[8];
		arr[0]=create_tnode("DO",$1);
    arr[1]=$2;
    arr[2]=create_tnode("WHILE",$3);
    arr[3]=create_tnode("(","(");
    arr[4]=$5;
    arr[5]=create_tnode(")",")");
    arr[6]=create_tnode(";",";");
		$$ = create_node("iteration_statement", 7, arr);
	}
	| FOR '(' expression_statement expression_statement ')' statement{
		PARSE_TREE arr[7];
		arr[0]=create_tnode("FOR",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=$4;
    arr[4]=create_tnode(")",")");
    arr[5]=$6;
		$$ = create_node("iteration_statement", 6, arr);
	}
	| FOR '(' expression_statement expression_statement expression ')' statement{
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("FOR",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=$4;
    arr[4]=$5;
    arr[5]=create_tnode(")",")");
    arr[6]=$7;
		$$ = create_node("iteration_statement", 7, arr);
	}
	| FOR '(' declaration expression_statement ')' statement{
  	PARSE_TREE arr[7];
		arr[0]=create_tnode("FOR",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=$4;
    arr[4]=create_tnode(")",")");
    arr[5]=$6;
		$$ = create_node("iteration_statement", 6, arr);
	}
	| FOR '(' declaration expression_statement expression ')' statement{
  	PARSE_TREE arr[8];
		arr[0]=create_tnode("FOR",$1);
    arr[1]=create_tnode("(","(");
    arr[2]=$3;
    arr[3]=$4;
    arr[4]=$5;
    arr[5]=create_tnode(")",")");
    arr[6]=$7;
		$$ = create_node("iteration_statement", 7, arr);
	}
	;

jump_statement
	: GOTO IDENTIFIER ';'{
		PARSE_TREE arr[4];
		arr[0]=create_tnode("GOTO",$1);
    arr[1]=create_tnode("IDENTIFIER",$2);
    arr[2]=create_tnode(";",";");
		$$ = create_node("jump_statement", 3, arr);
	}
	| CONTINUE ';'{
		PARSE_TREE arr[3];
		arr[0]=create_tnode("CONTINUE",$1);
    arr[1]=create_tnode(";",";");
		$$ = create_node("jump_statement", 2, arr);
	}
	| BREAK ';'{
		PARSE_TREE arr[3];
		arr[0]=create_tnode("BREAK",$1);
    arr[1]=create_tnode(";",";");
		$$ = create_node("jump_statement", 2, arr);
	}
	| RETURN ';'{
		PARSE_TREE arr[3];
		arr[0]=create_tnode("RETURN",$1);
    arr[1]=create_tnode(";",";");
		$$ = create_node("jump_statement", 2, arr);
	}
	| RETURN expression ';'{
		PARSE_TREE arr[4];
		arr[0]=create_tnode("RETURN",$1);
    arr[1]=$2;
    arr[2]=create_tnode(";",";");
		$$ = create_node("jump_statement", 3, arr);
	}
	;

base:
	translation_unit{
		PARSE_TREE ParseTree;
		PARSE_TREE arr[2];
		arr[0]=$1;
		ParseTree = create_node("base", 1, arr);
		print_file(ParseTree);
	}
	;

translation_unit:
	external_declaration{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("translation_unit", 1, arr);
	}
	| translation_unit external_declaration{
		PARSE_TREE arr[3];
		arr[0]=$1;
    	arr[1]=$2;
		$$ = create_node("translation_unit", 2, arr);
	}
	;

external_declaration
	: function_definition{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("external_declaration", 1, arr);
	}
	| declaration{
		PARSE_TREE arr[2];
		arr[0]=$1;
		$$ = create_node("external_declaration", 1, arr);
	}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement{
		PARSE_TREE arr[5];
		arr[0]=$1;
    arr[1]=$2;
    arr[2]=$3;
    arr[3]=$4;
		$$ = create_node("function_definition", 4, arr);
	}
	| declaration_specifiers declarator compound_statement{
		PARSE_TREE arr[4];
		arr[0]=$1;
    arr[1]=$2;
    arr[2]=$3;
		$$ = create_node("function_definition", 3, arr);
	}
	;

declaration_list
	: declaration{
		PARSE_TREE arr[2];
		arr[0] = $1;
		$$ = create_node("declaration_list", 1, arr);
	}
	| declaration_list declaration{
		PARSE_TREE arr[3];
		arr[0]=$1;
    arr[1]=$2;
		$$ = create_node("declaration_list", 2, arr);
	}
	;

%%
#include <stdio.h>
#include "lex.yy.c"
int id=0;

FILE *fp;

void print_file(PARSE_TREE tree){
	fp=fopen("final.txt","w");
	fprintf(fp,"graph milestone{\n");
	
	print_node(tree);
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
		fprintf(fp," \"%s_%d\" -- \"%s_%d\";\n",tree->name,tree->uid,tree->ac_name,tree->uid);
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
	fprintf(stderr, "*** %s\n", s);
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


