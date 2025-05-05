#include<stdio.h>
void circle(double *,double *);
int main()
{
 double a;
 printf("enter radius of cicle\n");
 scanf("%lf",&a);
 double b=3.141;
 circle(&a,&b);
 printf("value of perimeter is %.3lf\n",a);
 printf("value of area is %.3lf\n",b);
 return 0;
 }
    void circle(double *a,double *b)
    {
       int c=*a;
      *a=2**b**a;
      *b=*b*c*c;
    }
