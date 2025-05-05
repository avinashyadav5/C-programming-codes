#include<stdio.h>
 int main()
  {
	int n,n1;
	printf("enter range to check odd\n");
	scanf("%d %d",&n,&n1);
	printf("odd numbers are\n");
	while(n<=n1)
	{
		if(n%2==1)
		{
			printf("%d\n",n);
		}
		n++;
	}
	return 0;
  }
