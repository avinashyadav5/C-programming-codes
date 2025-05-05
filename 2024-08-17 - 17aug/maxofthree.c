#include <stdio.h>
 int main()
  {
	int a,b,c,max;
	printf("enter three no.\n");
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(b>max)
		{ 
			max=b;
		}
	if(c>max)
		{
			max =c;
		}
	printf("maximum value between %d %d %d is %d \n",a,b,c,max);
  } 
