#include<stdio.h>
   int largest(int a[],int n);
   int  smallest(int a[],int n);
   int main()
     {
	int a[100], n, i;
	printf("Enter the size of array:\n"); 
	scanf("%d", &n);
	printf("Enter element in array:\n ");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	largest(a,n);
	smallest(a,n);
     return 0;
    }
 int largest(int a[],int n)
   {
	int max=a[0];
	for(int i=1;i<n;i++)
	{
	 if(a[i]>max)
	 max=a[i];
	}
	printf("largest number is %d\n",max);
       return 0;
   }
   int smallest(int a[],int n)
   {
	int min=a[0];
	for(int i=1;i<n;i++)
	{
	 if(a[i]<min)
	 min=a[i];
	}
	printf("smallest number is %d\n",min);
       return 0;
   }
