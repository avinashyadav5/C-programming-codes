#include <stdio.h>
 int main()
  {
	char ch;
	printf("enter a for addition s for subtraction m for multiply and d for divide\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		{
			int b,c;
			printf("enter two no. to add\n");
			scanf("%d %d",&b,&c);
			int d=b+c;
			printf("sum of given no .is %d\n",d);
		} 
		break;
		case 's':
		{
			int b,c;
			printf("enter two no. to subtract\n");
			scanf("%d %d",&b,&c);
			int d=b-c;
			printf("subtraction of given no .is %d\n",d);
		} 
		break;
		case 'm':
		{
			int b,c;
			printf("enter two no. to multiply\n");
			scanf("%d %d",&b,&c);
			int d=b*c;
			printf("multiplication of given no .is %d\n",d);
		} 
		break;
		case 'd':
		{
			int b,c;
			printf("enter two no. to divide\n");
			scanf("%d %d",&b,&c);
			int d=b/c;
			printf("division of given no .is %d\n",d);
		}
		break;
		default:
		printf("invalid input\n");  
	}
  }
