#include<stdio.h>
 int main()
  {
	int n , n1,rev,d;
	printf("enter a number \n");
	scanf("%d",&n);
	n1=n;
	rev=0;
	while (n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("%d\n",rev);
	return 0;
  }
