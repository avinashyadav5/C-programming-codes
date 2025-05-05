#include<stdio.h>
int main()
{
int n1=0,n2=1,n3=1,nt,n;
printf("enter no. of terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d ",n1);
nt=n1+n2+n3;
n1=n2;
n2=n3;
n3=nt;
}
return 0;
}
