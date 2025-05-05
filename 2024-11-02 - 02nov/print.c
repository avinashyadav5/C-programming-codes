#include<stdio.h>
#include<string.h>
int main()
  {
     printf("enter your name\n""");
     char c[99];
     scanf("%[^\n]s",c);
     printf("your name %s\n",c);
   }	
