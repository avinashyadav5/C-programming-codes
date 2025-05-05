#include <stdio.h>
  int main()
    {
		int a,b,c;
		printf("enter three values to check max or equal \n");
		scanf("%d %d %d",&a,&b,&c);
		if(a>b)
		{
			if(a>c)
				{
					printf("largest value is %d \n",a);
				}
			else 
					printf("largest value is %d \n",c);
        }
		if(b>c)
		{
			if(b>a)
				printf("largest value is %d \n",b);
			else
				printf("largest value is %d \n",c);
		}
		if (a==b)
		{
			if(a>c)
				{
					printf("largest value are %d %d \n",a,b);
				}
		}
		if (a==c)
		{
			if(a>b)
				{
					printf("largest value are %d %d \n",a,c);
				}
		}
		if (b==c)
		{
			if(b>a)
				printf("largest value are %d %d \n",c,b);
		}
	  return 0;
	}
