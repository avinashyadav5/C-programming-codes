#include<stdio.h>
int fib(int n1);
 int main()
   {
     int a,result;
     printf("enter term to find value\n");
     scanf("%d",&a);
     result=fib(a);
     printf("number is %d",result);
    return 0;
   }
 int fib(int n)
  {
    int f1=0,f2=1,f=0;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
      for(int i=3;i<=n;i++)
       {
         f=f1+f2;
         f1=f2;
         f2=f;
       }
     return f;
    }
  }

