#include<stdio.h>
int main()
{
int n;
printf("enter terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
 for(int k=1;k<=(n-i);k++)
 {
 printf(" ");
 }
 for(int j=1;j<=i;j++)
 {
  printf("%d ",(i+j+1)%2);
 }
  printf("\n");
 }
 return 0;
}
