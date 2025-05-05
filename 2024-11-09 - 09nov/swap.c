#include<stdio.h>
void swap(int *,int *);
int main()
{
 int a,b;
 printf("enter two values\n");
 scanf("%d %d",&a,&b);
 printf("value before swapping of a and b respectively are  %d	%d\n",a,b);
 swap(&a,&b);
 printf("value after swapping a and b respectively are  %d	%d\n",a,b);
 }
    void swap(int *a,int *b)
    {
      int temp=*a;
      *a=*b;
      *b=temp;
    }
