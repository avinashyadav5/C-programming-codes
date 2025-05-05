#include<stdio.h>
   int seclargest(int a[],int n);
   int main()
     {
	int a[100], n, i;
	printf("Enter the size of array:\n"); 
	scanf("%d", &n);
	printf("Enter element in array:\n");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	seclargest(a,n);
     return 0;
    }
 int seclargest(int a[],int n)
   {
	int max=a[0];
	for(int i=1;i<n;i++)
	{
	 if(a[i]>max)
	 max=a[i];
	}
	int max1=a[0];
	for(int j=0;j<n;j++)
	{
	if(a[j]==max)
	continue;
	else if(a[j]>max1)
	max1=a[j];
	}
       printf("second largest number is %d\n",max1);
     return 0;
   }

