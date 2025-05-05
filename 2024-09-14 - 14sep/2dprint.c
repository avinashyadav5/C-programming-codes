#include<stdio.h>
int main()
{
int a[3][3];
printf("enter elements in  arrays \n");
for(int i=0;i<3;i++)
{
printf("enter elements in row %d\n",(i+1));
for(int j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("3 x 3 matrix is\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}
