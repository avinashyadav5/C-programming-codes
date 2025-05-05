#include <stdio.h>
int main()
{
    int number, sum = 0; 
    printf("Enter a six-digit number: \n"); 
    scanf("%d", &number);
    sum= sum + number / 100000; 
    sum = sum + number % 10;
    printf("The sum of first and last digits is %d \n", sum); 
    return 0;
}
