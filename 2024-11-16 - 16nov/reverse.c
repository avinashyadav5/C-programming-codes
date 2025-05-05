#include <stdio.h>

int main()
   {
	int a;
	int *p;
	printf("Enter size of array: ");
	scanf("%d", &a);
	int b[a];
	p = b;
	for(int i = 0; i < a; i++)
	  {
		printf("Enter element %d(must be a character): ", i+1);
		scanf(" %d", p+i);
	  }
	p = b;
	printf("Your array is:\n");
	for(int i = 0; i < a; i++)
	  {
		printf("%d ", *(p+i));
	  }
	p = b;
	printf("\nYour array after reversing is:\n");
	for(int i = a-1; i >= 0; i--)
	  {
		printf("%d ", *(p+i));
	  }
	printf("\n");
	return 0;
   }

