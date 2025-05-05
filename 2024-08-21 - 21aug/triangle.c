#include <stdio.h>
 int main()
  {
	int n1,n2,n3;
	printf("enter three sides\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1==n2&&n2==n3)
		{
			printf("equilateral triangle\n");
		}
	else if(n1!=n2 && n2!=n3 && n1!=n3)
		{
			printf("scalene triangle\n");
		}
	else 
			printf("iscoles triangle\n");
	return 0;
  }
