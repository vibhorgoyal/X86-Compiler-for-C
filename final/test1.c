int printi(int num);
int prints(char * c);
int readi(int *eP);

int fac(int n){
	if(n==0)return 1;
	return n*fac(n-1);
}

int main(){
    int n;
    n=5;
    int x;
    x=fac(n);
    printi(x);
    return 0;
}