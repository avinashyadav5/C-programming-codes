#include<stdio.h>
  int main()
	{
		float height_288,base_288,area_288;
		printf("the height of the triangle = ");
		scanf("%f",&height_288);
		printf("the base of the triangle = ");
		scanf("%f",&base_288);
		area_288=(base_288*height_288)/2;
		printf("the area of triangle of height %f and base %f is %f 			\n",height_288,base_288,area_288);
		return 0;
	}
