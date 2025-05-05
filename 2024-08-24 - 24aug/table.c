#include<stdio.h>
 int main()
  {
	int n,n1;
	printf("enter a range to find table of 7\n");
	scanf("%d %d",&n,&n1);
	printf("table of seven within range is\n");
	while(n<n1)
	{
		if(n%7==0)
		printf("%d \n",n);
		n++;
		}
	return 0;
  }

