int printi(int num);
int prints(char * c);
int readi(int *eP);


// iteratice fibo


int main(){
	int arr[10];
	int n,m,tm;
	m=readi(&n);
	printi(m);
	arr[0] =m;
	tm=arr[0];
   printi(tm);
	
    return 0;
}