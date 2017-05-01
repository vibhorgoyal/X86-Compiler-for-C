int printi(int num);
int prints(char * c);
int readi(int *eP);

/*this program checks for taking input output printing and some arithmetic operations*/





int main()
{
    int i,x,m,n,y,k;
    int arr[10];
    // a[0]=1;
    // a[1]=2;
    // a[2]=a[1]+a[0];
    n=readi(&m);
  //  printi(n);
    for(i=0;i<n;i=i+1){
    	y=readi(&m);
    	arr[i]=y;
    }
    k=readi(&m);
    int lo,hi,mid;
    lo=0;
    hi=n-1;
	while(lo<hi){
	     mid=lo+(hi-lo)/2;
	     if(arr[mid]>k){
	     	hi=mid;
	     }
	     else{
	     	lo=mid+1;
	     } 
	}
    // for(i=0;i<n;i=i+1){
    // 	printi(arr[i]);
    // 	//prints("\n");
    // }
    printi(hi);
    return 0;
}