#include<stdio.h>
int main()
  {
    int a[3][3],b[3][3],sum[3][3];
    printf("enter elements in  arrays 1\n");
    for(int i=0;i<3;i++)
     {
       printf("enter elements in row %d\n",(i+1));
      for(int j=0;j<3;j++)
       {
        scanf("%d",&a[i][j]);
       }
      printf("\n");
     }
    printf("enter elements in  arrays 2\n");
   for(int i=0;i<3;i++)
    {
      printf("enter elements in row %d\n",(i+1));
      for(int j=0;j<3;j++)
       {
        scanf("%d",&b[i][j]);
       }
     printf("\n");
    }
   for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
       {
        sum[i][j]=a[i][j]+b[i][j];
       }
    }
   for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
       {
        printf("%d\t",sum[i][j]);
       }
     printf("\n");
    }
  return 0;
}
