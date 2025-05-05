#include<stdio.h>
   int primesum(int a[],int);
   int main()
     {
	int a[100], n, i;
	printf("Enter the size of array:\n"); 
	scanf("%d", &n);
	printf("Enter element in array:\n");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	printf("The sum of odd elements of the array is %d\n", primesum(a, n));
     return 0;
    }
 int primesum(int a[], int n)
   {
	int i, sum=0; 
	for(i=0; i<n; i++)
	 {
	   if(a[i]%2!=0)
	   sum=sum +a[i];
	 }
       return sum;
   }
