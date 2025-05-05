#include <stdio.h>
int main()
{   
    int n,m;int p,q;
    printf("enter row and column for array1\n");
    scanf("%d %d",&n,&m);
    int a[n][m]; 
    int c[n][p]; 
    printf("enter row and column for array2\n");
    scanf("%d %d",&p,&q);
    int b[p][q];
    if(n==p)
    {
    	printf("enter elements in array1\n");
    	for(int i=0;i<n;i++)
    	   {
   	      printf("enter elements in row %d\n",(i+1));
   	for(int j=0;j<m;j++)
    	   {
              scanf("%d",&a[i][j]);
    	   }
        printf("\n");
    }
    printf("enter elements in array2\n");
    for(int i=0;i<p;i++)
    	{
    	   printf("enter elements in row %d\n",(i+1));
   	   for(int j=0;j<q;j++)
   	     {
    		scanf("%d",&b[i][j]);
             }
   	printf("\n");
    	}
    for(int i=0;i<m;i++)
    	{
   	  for(int j=0;j<q;j++)
   	   {
   	      c[i][j]=0;
   	      for(int k=0;k<n;k++)
    		 {
   		   c[i][j]+=a[i][k]*b[k][j];
   		 }
   	   }
        }
    for(int i=0;i<n;i++)
   	 {
    	   for(int j=0;j<m;j++)
             {
    		printf("%d\t",c[i][j]);
   	     }
   	 printf("\n");
   	 }
   }
    else
    printf("multipliiication not possible\n");
    return 0;
}
