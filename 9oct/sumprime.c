#include<stdio.h>
   int primesum(int a[],int);
   int main()
     {
	int a[100], n, i;
	printf("\nEnter the size of array:\n"); 
	scanf("%d", &n);
	printf("\nEnter element in array:\n");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	printf("\nThe sum of the prime elements of the array is %d\n", primesum(a, n));
     return 0;
    }
 int primesum(int a[], int n)
   {
	int i, sum=0,c=0; 
	for(i=0; i<n; i++)
	 {
	  c=0;
	  for(int j=1;j<=a[i];j++)
	  {
	   if(a[i]%j==0)
	   c++;
	  }
	  if(c==2)
	   sum=sum +a[i];
	 }
       return sum;
   }
