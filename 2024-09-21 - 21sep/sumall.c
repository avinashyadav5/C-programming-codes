#include<stdio.h>
int main()
  {
    int n,m;
    printf("enter row and column\n");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m],sum=0;
    printf("enter elements in  arrays \n");
    for(int i=0;i<n;i++)
     {
       printf("enter elements in row %d\n",(i+1));
       for(int j=0;j<m;j++)
         {
           scanf("%d",&a[i][j]);
         }
       printf("\n");
     }
    for(int i=0;i<n;i++)
     {
       for(int j=0;j<m;j++)
         {
           sum+=a[i][j];
         }
     }
   printf("sum of all elements is %d\n",sum);
 return 0;
}
