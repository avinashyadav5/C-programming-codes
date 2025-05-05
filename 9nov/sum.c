#include<stdio.h>
int main()
{
  int a,b,*x,*y,sum;
  printf("enter values for sum\n");
  scanf("%d %d",&a,&b);
  x=&a;
  y=&b;
  sum=*x+*y;
  printf("sum is %d\n",sum);
}
