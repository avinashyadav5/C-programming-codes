#include <stdio.h>
#include <string.h>
int main()
  {
        int a;
	char *p;
	char d[999];
	printf("Enter your name: ");
	fgets(d,999,stdin);
	p = d;
	printf("Your name is: %s\n", d);
	printf("The name spelled backwards is: \n");
	for(int i = strlen(d)-1; i >= 0; i--)
	  {
		printf("%c ", *(p+i));
	  }
	printf("\n");
	return 0;
  }
