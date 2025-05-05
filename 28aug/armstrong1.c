#include<stdio.h>
 int main()
  {
	int n,sum=0,a=1;
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
		for(int i=d;i<=(d+c);i++);
		 {
			a=d*
		 }
		sum=sum+a;
		a=1;
		n1/=10;
	}
	if(n2==sum)
		printf("number is armstrong \n");
	else
		printf("number is not armstrong\n");
	return 0;
  }
