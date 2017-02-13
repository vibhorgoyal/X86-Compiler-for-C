#include "y.tab.h"
#include <stdio.h>
extern int yylex();
extern char *yytext;

int main(){
  int token;
  while((token=yylex())!=0){
    if(token==IDENTIFIER){
      printf("<IDENTIFIER, %d, %s>\n",token,yytext);
    }
    else if(token==I_CONSTANT){
      printf("<I_CONSTANT, %d, %s>\n",token,yytext);
    }
    else if(token==F_CONSTANT){
      printf("<F_CONSTANT, %d, %s>\n",token,yytext);
    }
    else if(token==STRING_LITERAL){
      printf("<STRING_LITERAL, %d, %s>\n",token,yytext);
    }
    else if(token==FUNC_NAME){
      printf("<FUNC_NAME, %d, %s>\n",token,yytext);
    }
    else if(token==SIZEOF){
      printf("<SIZEOF, %d, %s>\n",token,yytext);
    }
    else if(token==PTR_OP){
      printf("<PTR_OP, %d, %s>\n",token,yytext);
    }
    else if(token==INC_OP){
      printf("<INC_OP, %d, %s>\n",token,yytext);
    }
    else if(token==DEC_OP){
      printf("<DEC_OP, %d, %s>\n",token,yytext);
    }
    else if(token==LEFT_OP){
      printf("<LEFT_OP, %d, %s>\n",token,yytext);
    }
    else if(token==RIGHT_OP){
      printf("<RIGHT_OP, %d, %s>\n",token,yytext);
    }
    else if(token==LE_OP){
      printf("<LE_OP, %d, %s>\n",token,yytext);
    }
    else if(token==GE_OP){
      printf("<GE_OP, %d, %s>\n",token,yytext);
    }
    else if(token==EQ_OP){
      printf("<EQ_OP, %d, %s>\n",token,yytext);
    }
    else if(token==NE_OP){
      printf("<NE_OP, %d, %s>\n",token,yytext);
    }
    else if(token==AND_OP){
      printf("<AND_OP, %d, %s>\n",token,yytext);
    }
    else if(token==OR_OP){
      printf("<OR_OP, %d, %s>\n",token,yytext);
    }
    else if(token==MUL_ASSIGN){
      printf("<MUL_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==DIV_ASSIGN){
      printf("<DIV_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==MOD_ASSIGN){
      printf("<MOD_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==ADD_ASSIGN){
      printf("<ADD_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==SUB_ASSIGN){
      printf("<SUB_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==LEFT_ASSIGN){
      printf("<LEFT_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==RIGHT_ASSIGN){
      printf("<RIGHT_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==AND_ASSIGN){
      printf("<AND_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==XOR_ASSIGN){
      printf("<XOR_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==OR_ASSIGN){
      printf("<OR_ASSIGN, %d, %s>\n",token,yytext);
    }
    else if(token==TYPEDEF_NAME){
      printf("<TYPEDEF_NAME, %d, %s>\n",token,yytext);
    }
    else if(token==ENUMERATION_CONSTANT){
      printf("<ENUMERATION_CONSTANT, %d, %s>\n",token,yytext);
    }
    else if(token==TYPEDEF){
      printf("<TYPEDEF, %d, %s>\n",token,yytext);
    }
    else if(token==EXTERN){
      printf("<EXTERN, %d, %s>\n",token,yytext);
    }
    else if(token==STATIC){
      printf("<STATIC, %d, %s>\n",token,yytext);
    }
    else if(token==AUTO){
      printf("<AUTO, %d, %s>\n",token,yytext);
    }
    else if(token==REGISTER){
      printf("<REGISTER, %d, %s>\n",token,yytext);
    }
    else if(token==INLINE){
      printf("<INLINE, %d, %s>\n",token,yytext);
    }
    else if(token==CONST){
      printf("<CONST, %d, %s>\n",token,yytext);
    }
    else if(token==RESTRICT){
      printf("<RESTRICT, %d, %s>\n",token,yytext);
    }
    else if(token==VOLATILE){
      printf("<VOLATILE, %d, %s>\n",token,yytext);
    }
    else if(token==BOOL){
      printf("<BOOL, %d, %s>\n",token,yytext);
    }
    else if(token==CHAR){
      printf("<CHAR, %d, %s>\n",token,yytext);
    }
    else if(token==SHORT){
      printf("<SHORT, %d, %s>\n",token,yytext);
    }
     else if(token==INT){
      printf("<INT, %d, %s>\n",token,yytext);
    }
     else if(token==LONG){
      printf("<LONG, %d, %s>\n",token,yytext);
    }
     else if(token==SIGNED){
      printf("<SIGNED, %d, %s>\n",token,yytext);
    }
     else if(token==UNSIGNED){
      printf("<UNSIGNED, %d, %s>\n",token,yytext);
    }
     else if(token==FLOAT){
      printf("<FLOAT, %d, %s>\n",token,yytext);
    }
     else if(token==DOUBLE){
      printf("<DOUBLE, %d, %s>\n",token,yytext);
    }
     else if(token==VOID){
      printf("<VOID, %d, %s>\n",token,yytext);
    }
     else if(token==COMPLEX){
      printf("<COMPLEX, %d, %s>\n",token,yytext);
    }
     else if(token==IMAGINARY){
      printf("<IMAGINARY, %d, %s>\n",token,yytext);
    }
     else if(token==STRUCT){
      printf("<STRUCT, %d, %s>\n",token,yytext);
    }
     else if(token==UNION){
      printf("<UNION, %d, %s>\n",token,yytext);
    }
     else if(token==ENUM){
      printf("<ENUM, %d, %s>\n",token,yytext);
    }
     else if(token==ELLIPSIS){
      printf("<ELLIPSIS, %d, %s>\n",token,yytext);
    }
     else if(token==CASE){
      printf("<CASE, %d, %s>\n",token,yytext);
    }
     else if(token==DEFAULT){
      printf("<DEFAULT, %d, %s>\n",token,yytext);
    }
     else if(token==IF){
      printf("<IF, %d, %s>\n",token,yytext);
    }
     else if(token==ELSE){
      printf("<ELSE, %d, %s>\n",token,yytext);
    }
     else if(token==SWITCH){
      printf("<SWITCH, %d, %s>\n",token,yytext);
    }
    else if(token==WHILE){
      printf("<WHILE, %d, %s>\n",token,yytext);
    }
    else if(token==DO){
      printf("<DO, %d, %s>\n",token,yytext);
    }
    else if(token==FOR){
      printf("<FOR, %d, %s>\n",token,yytext);
    }
    else if(token==GOTO){
      printf("<GOTO, %d, %s>\n",token,yytext);
    }
    else if(token==CONTINUE){
      printf("<CONTINUE, %d, %s>\n",token,yytext);
    }
    else if(token==BREAK){
      printf("<BREAK, %d, %s>\n",token,yytext);
    }
    else if(token==RETURN){
      printf("<RETURN, %d, %s>\n",token,yytext);
    }
    else if(token==ALIGNAS){
      printf("<ALIGNAS, %d, %s>\n",token,yytext);
    }
    else if(token==ALIGNOF){
      printf("<ALIGNOF, %d, %s>\n",token,yytext);
    }
    else if(token==ATOMIC){
      printf("<ATOMIC, %d, %s>\n",token,yytext);
    }
    else if(token==GENERIC){
      printf("<GENERIC, %d, %s>\n",token,yytext);
    }
    else if(token==NORETURN){
      printf("<NORETURN, %d, %s>\n",token,yytext);
    }
    else if(token==STATIC_ASSERT){
      printf("<STATIC_ASSERT, %d, %s>\n",token,yytext);
    }
    else if(token==THREAD_LOCAL){
      printf("<THREAD_LOCAL, %d, %s>\n",token,yytext);
    }
         
    
  }
return 0;}