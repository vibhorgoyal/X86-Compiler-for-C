int printi(int num);
int prints(char * c);
int readi(int *eP);


// odd even mutual

int even(int x);
int odd(int x);

int odd(int x){
	if(x==0){
		return 0;
	}
	return even(x-1);

}

int even(int x){
	if(x==0){
		return 1;
	}
	return odd(x-1);

}

int main(){
    int m,n;

   
	m = odd(10);
	printi(m);
	
    return 0;
}