#include<stdio.h>
#include<string.h>
int main()
  {
     char c[99];
     char c1[99];
     char c2[99];
     printf("enter your house name\n");
     gets(c);
     strcat(c," ");
     printf("enter your street name\n");
     gets(c1);
     strcat(c1," ");
     printf("enter your town name\n");
     gets(c2);
     strcat(c2," ");
     //strncat(c2,c1);
     //strncat(c,c2);
     printf("string after concatenation %s %.4s %.3s",c,c1,c2);
  }
