#include<stdio.h>
int main()
{
int n1,n2;
printf("enter range for even\n");
scanf("%d %d",&n1,&n2);
int max=0,min=0;
if(n1>n2)
{
max=n1;
min=n2;
}
else
{
max=n2;
min=n1;
}
printf("even numbers are\n");
for(int i=max;i>=min;i--)
{
if(i%2==0)
printf("%d  ",i);
}
printf("\n");
return 0;
}
