#include<stdio.h>
int sum(int n1);
 int main()
   {
     int a,result;
     printf("enter value to find number of zeros\n");
     scanf("%d",&a);
     result=sum(a);
     printf("number of zeros in a number is %d",result);
    return 0;
   }
 int sum(int n)
  { 
     int sum=0;
      while(n>0)
      {
       int d=n%10;
       if(d==0)
       sum++;
       n=n/10;
      }
    return sum;
  }

