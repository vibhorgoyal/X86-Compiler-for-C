#include "y.tab.h"
#include "stdio.h"

int main()
{
  yydebug=1;
  int x=yyparse();  
  if(x==0){
    printf("SUCCESS!");
  }
  else{
    printf("FAIL\n");
  }
  return 0;
}
