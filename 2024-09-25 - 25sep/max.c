#include<stdio.h>
int max(int n1,int n2);
 int main()
   {
      int a,b,result;
      printf("enter two numbers\n");
      scanf("%d %d",&a,&b);
      result=max(a,b);
      if(result==1)
        printf("numbers are equal");
      else
        printf("max of two numbers is %d",result);
    return 0;
  }
 int max(int n1,int n2)
  {
     int result;
     if(n1>n2)
        result=n1;
     else if(n1<n2)
        result=n2;
     else
        result=1;
    return result;
 }

