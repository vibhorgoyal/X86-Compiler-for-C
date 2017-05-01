int printi(int num);
int prints(char * c);
int readi(int *eP);

/*this program checks for taking input output printing and some arithmetic operations*/
 
int main()
{
  int array[5], n, c, d, swap,i,hu,mu;
  n=3;
  for(i=0;i<n;i=i+1){
    hu = readi(&mu);
    array[i] = hu;
  }

  for (c = 0 ; c < ( n - 1 ); c=c+1)
  {     for (d = 0 ; d < n - c - 1; d=d+1)
    {
        
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  for ( c = 0 ; c < n ; c=c+1 )
    printi(array[c]); 
  return 0;
}