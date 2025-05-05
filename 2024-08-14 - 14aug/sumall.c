#include<stdio.h>
  int main()
     {
	int s,n,m,l,r;
	printf("enter a  three digit number:\n ");
	scanf("%d",&n);
	l=n%10;
	n=n/10;
	r=n/10;
	m=n%10;
	s=l+m+r;
	printf("the sum of all three number is %d \n",s);
	return 0;
     }
