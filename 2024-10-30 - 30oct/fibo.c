#include<stdio.h>
#include<stdlib.h>
void fib(int a);
 int main()
   {
     int a;
     printf("enter value to check\n");
     scanf("%d",&a);
     fib(a);
    return 0;
   }
 void fib(int a)
  {
    int f1=0,f2=1,f=0;
    if(a==0)
    {
    printf("value present");
    exit(0);
    }
    else if(a==1)
    {
    printf("value present");
    exit(0);
    }
    else
    {
      for(int i=3;  ;i++)
       {
         f=f1+f2;
         if(f==a)
         {
         printf("value present");
         exit(0);
         }
         f1=f2;
         f2=f;
       }
    }
  }

