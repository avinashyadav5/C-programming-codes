#include<stdio.h>
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
    int max=a[0][0];
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
          {
            if(a[i][j]>max)
            max=a[i][j];
          }
      }
    int min=max;
    for(int i=0;i<n;i++)
      {
       for(int j=0;j<m;j++)
        {
         if(a[i][j]<min)
         min=a[i][j];
        }
      }
    int sum=0;
    sum=max+min;
    printf("sum of largest and smallest number is %d",sum);
  	return 0; 
}

