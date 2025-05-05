#include<stdio.h>
int prime(int n1);
 int main()
   {
     int a,result;
     printf("enter term to check  prime or not\n");
     scanf("%d",&a);
     result=prime(a);
     if(result==2)
     printf("number is prime ");
     else
     printf("number is not prime ");
    return 0;
   }
 int prime(int n)
  { 
     int f=0;
      for(int i=1;i<=n;i++)
       {
         if(n%i==0)
         f++;
       }
     return f;
  }

