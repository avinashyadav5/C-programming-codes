#include<stdio.h>
 int main()
  {
	int w;
	printf("enter a week day from 0 to 6\n");
	scanf("%d",&w);
	switch(w)
	{
		case 0:
		{
			printf("this is sunday\n");
		}
		break;
		case 1:
		{
			printf("this is monday\n");
		}
		break;
		case 2:
		{
			printf("this is tuesday\n");
		}
		break;
		case 3:
		{
			printf("this is wednesday\n");
		}
		break;
		case 4:
		{
			printf("this is thursday\n");
		}
		break;
		case 5:
		{
			printf("this is friday\n");
		}
		break;
		case 6:
		{
			printf("this is saturday\n");
		}
		break;
		default:
		{
			printf("invalid input\n");
		}
	}
 }

