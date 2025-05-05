#include <stdio.h>
  int main()
    {
		char ch;
		printf("enter a alphabet \n");
		scanf("%c",&ch);
		if(ch>='a'&& ch<='z'||ch>='A' && ch<='Z')
	    {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("alphabet is vowel \n");
	else 
		printf("alpahbet is consonant \n");
		}
		else 
		printf("entered input is not an alphabet \n");
	}


