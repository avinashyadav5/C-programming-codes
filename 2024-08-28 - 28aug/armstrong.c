#include<stdio.h>
#include<math.h>
 int main()
  {
	int n,sum=0;
	printf("enter a no.\n");
	scanf("%d",&n);
	int n1=n;
	int n2=n;
	int c=0;
	while(n>0)
	{
		n/=10;
		c++;
	}
	while(n1>0)
	{
		int d=n1%10;
		sum=sum+pow(d,c);
		n1/=10;
	}
	if(n2==sum)
		printf("number is armstrong \n");
	else
		printf("number is not armstrong\n");
	return 0;
  }
