#include<stdio.h>
   int swap(int a[],int);
   int main()
     {
	int a[100], n, i;
	printf("Enter the size of array:\n"); 
	scanf("%d", &n);
	printf("Enter element in array:\n ");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	printf("array after swapping\n");
	swap(a, n);
     return 0;
    }
 int swap(int a[], int n)
   {
	int i, temp=0; 
	temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	for(i=0; i<n; i++)
	 {
	   printf("%d  ",a[i]);
	 }
	 printf("\n");
       return 0;
   }
