#include <stdio.h>
   int main()
      {
	int hh,mm,ss,h,m,s,hr,min,sec;
	printf("enter time in hh:mm:ss \n");
	scanf("%d %d %d",&hh,&mm,&ss);
	printf("enter time in hh:mm:ss \n");
	scanf("%d %d %d",&h,&m,&s);
	sec=s+ss;
	sec=(sec>60)?(sec-60):sec;
	min=mm+m + (s+ss)/60;
	min=(min>60)?(min-60) :min;
	hr =h+hh + (m+mm)/60;
	printf("output time is %d : %d : %d",hr,min,sec);
	return 0;
      }
