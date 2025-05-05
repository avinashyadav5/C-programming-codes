#include<stdio.h>
   int main()
	{
		double a,b,c,d,e,f;
		printf("Enter the buying price \n");
		scanf("%lf",&a);
		printf("Enter the market price \n");
		scanf("%lf",&b);
		printf("Enter the discount in percentage \n");
		scanf("%lf",&c);
		d=(b-((b*c)/100.0))-a;
		f=(d/a)*100.0;
		f=(f<0)?f=f*-1:f;
		e=(d>0)?printf("there is profit of %lf \n",f):printf("there is loss of %lf\n",f);
	 return 0;
	}
