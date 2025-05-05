#include<stdio.h>
int main()
{
int n;
printf("enter number of terms\n");
scanf("%d",&n);int a;
for(int i=1;i<=n;i++)
 {  
   a=i;
   for(int j=1;j<=i;j++)
   {
     int d=j;
     if(i%2==0)
     {
       printf("%d",a);
       a--;
     }
     else 
     {
     printf("%d",d);
     d++;
     }
   }
   printf("\n");
 }
 return 0;
}         
