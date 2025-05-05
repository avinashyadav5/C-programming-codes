#include<stdio.h>
int main()
  {
    int a;char ch;float f;double d;
	printf("enter an integer\n");
	scanf("%d",&a);
	printf("enter a char\n");
	scanf(" %c",&ch);
	printf("enter a float\n");
	scanf("%f",&f);
	printf("enter a double\n");
	scanf("%lf",&d);
	printf("size of integer pointer is %ld\n",sizeof(a));
	printf("size of char pointer is %ld\n",sizeof(ch));
	printf("size of float pointer is %ld\n",sizeof(f));
	printf("size of double pointer is %ld\n",sizeof(d));
  }
	
