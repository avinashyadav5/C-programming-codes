#include <stdio.h>
 void main()
  {
	int a_276,b_276,c_276;
	printf("Enter the coefficients of the quadratic equation.\n");
	printf("ax^2+bx+c=0\n");
	scanf("%d %d %d",&a_276,&b_276,&c_276);
	if ((b_276*b_276)-4*a_276*c_276==0)
	{
		printf("Roots are real and equal.");
	}
	else if ((b_276*b_276)-4*a_276*c_276>0)
	{
		printf("Roots are real but not equal.");
	}
	else
	{
		printf("Roots are imaginary");
	}
  }
