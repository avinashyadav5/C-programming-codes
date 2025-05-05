#include<stdio.h>
int small(int n1,int n2,int n3);
 int main()
   {
      int a,b,c,result;
      printf("enter three numbers two check smallest\n");
      scanf("%d %d %d",&a,&b,&c);
      result=small(a,b,c);
       printf("smallest of three numbers is %d",result);
    return 0;
  }
 int small(int n1,int n2,int n3)
  {
     int result;
     if(n1>n2)
      {
        if(n2<n3)
        result=n2;
        else if(n2>n3)
        result =n3;
        
      }
     else if(n1<n2)
      {
        if(n1<n3)
        result=n1;
        else if(n1>n3)
        result=n3;
      }
    return result;
 }

