#include <stdio.h>
int main()
{
    int number,a,b,c;
    printf("Enter three digit number to reverse:");
    scanf("%d",&number);
    c=number/100;
    b=(number/10)%10;
    a=number%10;
    int sum=a*100+b*10+c;
    printf("The number after reversing is %d ",sum);
    return 0;
}
