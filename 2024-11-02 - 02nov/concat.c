#include<stdio.h>
#include<string.h>
int main()
  {
     char c[99];
     char c1[99];
     char c2[99];
     printf("enter your first name\n");
     gets(c);
     strcat(c," ");
     printf("enter your middle name\n");
     gets(c1);
     strcat(c1," ");
     printf("enter your last name\n");
     gets(c2);
     strcat(c2," ");
     strcat(c2,c1);
     strcat(c,c2);
     printf("string after concatenation %s",c);
  }
