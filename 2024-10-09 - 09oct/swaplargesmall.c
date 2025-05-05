#include<stdio.h>
   int largest(int a[],int n);

   int main()
     {
	int a[100], n, i;
	printf("Enter the size of array:\n"); 
	scanf("%d", &n);
	printf("Enter element in array:\n ");
	for(i=0;i<n;i++)
   	  scanf("%d",&a[i]); 
	largest(a,n);
	
     return 0;
    }
 int largest(int a[],int n)
   {
	int max=a[0],c,d;
	for(int i=1;i<n;i++)
	{
	 if(a[i]>max)
	 {
	 max=a[i];
	 c=i;
	}
	}
	printf("largest number is %d\n",max);
	int min=a[0];
	for(int j=1;j<n;j++)
	{
	 if(a[j]<min)
	 {
	 d=j;
	 min=a[j];
	 }
	}
       printf("smallest number is %d\n",min);
	int temp=a[c];
	a[c]=a[d];
        a[d]=temp;
        for(int k=0;k<n;k++)
        {
           printf("%d ",a[k]);
           }
       return 0;
   }
