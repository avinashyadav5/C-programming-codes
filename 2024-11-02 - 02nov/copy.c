#include<stdio.h>
#include<string.h>
int main()
  {
     printf("enter two string\n");
     char c[99];
     char c1[99];
     gets(c);
     gets(c1);
     strcpy(c,c1);
     printf("after copy %s \n",c);
   }
