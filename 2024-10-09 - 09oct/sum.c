#include<stdio.h>
   int SUM_ARRAY(int a[],int);
   int main()
     {
	int a[100], n, i;
	printf("\nEnter the size of array:"); 
	scanf("%d", &n);
	printf("\nEnter element in array: ");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	printf("\nThe sum of the elements of the array is %d", SUM_ARRAY(a, n));
     return 0;
    }
 int SUM_ARRAY(int a[], int n)
   {
	int i, sum=0; 
	for(i=0; i<n; i++)
	 {
	   sum=sum +a[i];
	 }
       return sum;
   }
