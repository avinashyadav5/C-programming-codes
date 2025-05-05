#include <stdio.h>
  int main()
	{
		char ch;
		printf("enter a character \n");
		scanf("%c",&ch);
	if(ch>='a'&& ch<='z')
		{
			ch-=32;
			printf("character to uppercase  %c \n" ,ch);
	else if(ch>='A' && ch<='Z')
		{
			printf("character is already in uppercase  %c \n" ,ch);
		}
	else 
			printf(" %c is not a character\n",ch);
		}
	}
