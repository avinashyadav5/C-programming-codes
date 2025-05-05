#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
  {
     printf("enter word to convert to upper\n");
     char c;
     scanf("%c",&c);
     if(isdigit(c))
       printf("it is non character\n");
     else if(isupper(c))
        {
           printf("character is in uppercase");
        }
     else if(islower(c))
        {
           
           printf("after convetring to uppercase is  %c",toupper(c));
        }
  }
        
