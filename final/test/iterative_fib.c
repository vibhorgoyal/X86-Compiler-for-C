int printi(int num);
int prints(char * c);
int readi(int *eP);


// iteratice fibo


int main(){
    int n,i,res,a,b,tmp;

    n=readi(&tmp);
    a=0;
    b=1;
    for(i=2;i<=n;i++){
    	res=a+b;
    	a=b;
    	b=res;
    	//printi(res);
    	//prints("\n");
    }
	   
	
	printi(res);
	
    return 0;
}