#include<stdio.h>
 int main()
  {
	int m,p,c;
	printf("enter marks obtained in maths,physics and chemistry\n");
	scanf("%d %d %d",&m,&p,&c);
	int d=m+p+c;
	int f=m+p;
	if(m>=65 && p>=55 && c>=50 && d>=190 && f>=140)
		{
			printf("The candidate is eligible for admission");
		}
	else
		{
			printf("The candidate is not eligible for admission");
		}
	return 0;
  }
