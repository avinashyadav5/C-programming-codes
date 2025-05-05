#include<stdio.h>
int main()
{
int n;  char ch='A';
printf("enter number of terms\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=i;j++)
    {
      printf("%c",ch);
      ch+=1;
    }
  printf("\n");
 }
return 0;
}
