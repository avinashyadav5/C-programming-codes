#include<stdio.h>
 int main()
  {
	int n;
	printf("enter a number \n");
	scanf("%d",&n);
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	printf("sum of digits is %d",sum);
	return 0;
  }
