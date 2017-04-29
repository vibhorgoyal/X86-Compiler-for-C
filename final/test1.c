int printi(int num);
int prints(char * c);
int readi(int *eP);

int fac(int n){
	if(n==1){
		n=6;	
	} 
	return n*n;
}

int main(){
    int n;
    n=5;
    int x;
    x=fac(n);
    printi(x);
    return 0;
}