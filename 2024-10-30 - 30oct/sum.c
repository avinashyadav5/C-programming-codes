#include<stdio.h>
int sumls(int a,int b,int ar[][b]);
int main()
  {
    int n,m;
    printf("enter the row and column size\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("enter the elements in array\n");
    for(int i=0;i<n;i++)
      {
        printf("enter elements in row %d\n",(i+1));
        for(int j=0;j<m;j++)
          {
            scanf("%d",&a[i][j]);
          }
        printf("\n");
      }
      int v = sumls(n,m,a);
      printf("sum of largest and smallest number is %d",v); 
      return 0;
   }
   int sumls(int a,int b,int ar[][b])
   { 
    int max=ar[0][0];
    for(int i=0;i<a;i++)
      {
        for(int j=0;j<b;j++)
          {
            if(ar[i][j]>max)
            max=ar[i][j];
          }
      }
    int min=max;
    for(int i=0;i<a;i++)
      {
       for(int j=0;j<b;j++)
        {
         if(ar[i][j]<min)
         min=ar[i][j];
        }
      }
    int sum=0;
    sum=max+min;
  	return sum; 
}

