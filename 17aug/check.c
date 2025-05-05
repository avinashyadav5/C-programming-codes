#include <stdio.h>
   int main()
     {
	int a;
	printf("enter a number \n");
	scanf("%d",&a); 
	if(a==0)
	{
		printf("entered value is zero \n");
	}
	if(a>0)
	{
		printf("entered value is positive \n");
	}
	if(a<0)
	{
		printf("entered value is negative \n");
	}
	return 0;
    }
