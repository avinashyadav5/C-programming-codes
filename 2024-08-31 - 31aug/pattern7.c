#include<stdio.h>
int main()
{
int n;
printf("enter rows");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
char ch='A';
for(int j=1;j<=i;j++)
{
printf("%c",ch);
ch+=1;
}
printf("\n");
}
return 0;
}
