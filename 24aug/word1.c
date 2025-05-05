#include <stdio.h>
int main()
 {
   int num,rev=0;
   printf("enter a no.");
      scanf("%d",&num);
      int n =num,n2=num,n3;
      int c=0,f=0,z=0;
       while(n!=0)
        {
         int d= n%10;
         c++;
         n=n/10;
         }
       while(n2>0)
       {
          int d=n2%10;
          rev=rev*10+d;
          n2/=10;
        }
        n3=rev;
        while(n3>0)
        {
          n3/=10;
          f++;
        }
        z=c-f;
      while(rev>0)
       {
         int t=rev%10;
         switch(t)
         {
          case 0: 
          printf("zero ");
          break;
          case 1:
          printf("one ");
          break;
          case 2:
          printf("two ");
          break;
          case 3:
          printf("three ");
          break;
          case 4:
          printf("four ");
          break;
          case 5:
          printf("five ");
          break;
          case 6:
          printf("six ");
          break;
          case 7:
          printf("seven ");
          break;
          case 8:
          printf("eight ");
          break;
          case 9:
          printf("nine ");
          break;
         }
        rev/=10;
        }
      for(int i=1;i<=z;i++)
        {
        printf("zero ");
        }
  return 0;
}

