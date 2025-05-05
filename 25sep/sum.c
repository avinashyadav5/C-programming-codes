#include<stdio.h>
int sum(int n1);
 int main()
   {
     int a,result;
     printf("enter value to find sum of digit\n");
     scanf("%d",&a);
     result=sum(a);
     printf("sum of digit is %d",result);
    return 0;
   }
 int sum(int n)
  { 
     int sum=0;
      while(n>0)
      {
       int d=n%10;
       n=n/10;
       sum+=d;
      }
    return sum;
  }

