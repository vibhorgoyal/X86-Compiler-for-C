int printi(int num);
int prints(char * c);
int readi(int *eP);

// Ackerman
int func(int a,int b,int c,int d,int e,int f,int g,int h){
	return a+b+c+d+e+f+g+h;
}

int main(){
    int m,n;

   
	m = func(1,2,3,4,5,6,7,8);
	printi(m);
	
    return 0;
}