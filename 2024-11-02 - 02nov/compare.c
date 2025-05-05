#include<stdio.h>
#include<string.h>
int main()
  {
     printf("enter two strings to compare\n");
     char c[99];
     char c1[99];
     gets(c);
     gets(c1);
     int a=strcmp(c,c1);
     if(a>0)
       {
          printf("string 2 is small");
       }
      else if(a<0)
        {
           printf("string 1 is small");
        }
      else
        {
           printf("both string are same");
        }
  }
