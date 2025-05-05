#include<stdio.h>
   void swap(int n,int m,int a[100][100]);

   int main()
     {
	int n,m, i;
	printf("Enter the row and column of array:\n"); 
	scanf("%d %d", &n,&m);
	printf("Enter element in array:\n ");
	int a[n][m];
	for(i=0;i<n;i++)
	 {
	   for(int j=0;j<m;j++)
	    {
   	      scanf("%d",&a[i][j]);
   	    } 
   	    printf("\n");
   	 }
   	 printf("original matrix \n");
   	 for(i=0;i<n;i++)
	 {
	   for(int j=0;j<m;j++)
	    {
   	      printf("%d ",a[i][j]);
   	    } 
   	    printf("\n");
   	 }
	swap(n,m,a);
	
     return 0;
    }
 void swap(int n,int m,int a[n][m])
   {
	int max=a[0][0],c,d,e,f;
	for(int i=0;i<n;i++)
	{
	 for(int j=0;j<m;j++)
	 {
	  if(a[i][j]>max)
	  {
	    max=a[i][j];
	    c=i;
	    d=j;
	  }
	}
	}
	printf("largest number is %d\n",max);
	int min=a[0][0];
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
	 if(a[i][j]<min)
	 {
	  e=i;
	  f=j;
	  min=a[i][j];
	 }
	}
	}
       printf("smallest number is %d\n",min);
        for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
	 if(a[i][j]==max)
	 a[i][j]=min;
	 else if(a[i][j]==min)
	 a[i][j]=max;
	 }
	 }
        for(int k=0;k<n;k++)
        {
          for(int j=0;j<m;j++)
          {
           printf("%d ",a[k][j]);
          }
          printf("\n");
        }
      // return 0;
   }
