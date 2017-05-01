int printi(int num);
int prints(char * c);
int readi(int *eP);

// Ackerman

int ACK(int m,int n){
	if(m==0){
		return n+1;
	}
	if(n==0){
		return ACK(m-1,1);
	}
	int tmp;
	tmp=ACK(m,n-1);
	return ACK(m-1,tmp);
}

int main(){
    int m,n;
    int x;
    m=3;
    n=1;
    x=ACK(m,n);
    printi(x);
    return 0;
}