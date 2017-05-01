int printi(int num);
int prints(char * c);
int readi(int *eP);


int main(){
    int arr1[2][2],arr2[2][2],res[2][2];
    int i,sum,n,j,k;
    arr1[0][0]=1;
    arr1[0][1]=2;
    arr1[1][0]=2;
    arr1[1][1]=2;
    arr2[0][0]=1;
    arr2[0][1]=1;
    arr2[1][0]=1;
    arr2[1][1]=1;
    for(i=0;i<2;i=i+1){
    	for(j=0;j<2;j=j+1){
    		sum=0;
    		for(k=0;k<2;k=k+1){
    			sum=sum+arr1[i][k]*arr2[k][j];
    		}
    		printi(sum);
    	}
    }


    n=1;	
    //printi(x);
    return 0;
}