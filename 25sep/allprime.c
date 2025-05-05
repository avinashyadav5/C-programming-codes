#include<stdio.h>
int prime(int n1,int n2);
 int main()
   {
     int a,b,result;
     printf("enter number for range of prime\n");
     scanf("%d %d",&a,&b);
       prime(a,b);
    return 0;
   }
 int prime(int n1,int n2)
  { 
    int f=0;
    printf("prime numbers in range are : ");
      for(int i=n1;i<=n2;i++)
       {
       f=0;
       for(int j=1;j<=i;j++)
        { 
         if(i%j==0)
         f++;
       }
        if(f==2)
        printf("%d  ",i);
       }
   return 0;
  }

