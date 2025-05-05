#include <stdio.h>
int main()
{
      int num1, num2, num3, max;
      printf("Enter 3 numbers to be compared\n");
      scanf("%d %d %d", &num1, &num2, &num3);
      if(num1 == num2 || num2 == num3 || num1 == num3)
	{
		max = num1;
		if(num2 > max)
		{
			max = num2;
		}
		else if(num3 > max)
		{
			max = num3;
		}
	}
	else
	{
		printf("Please enter a valid number\n");
	}
	printf("The largest number among the entered values is %d\n", max);
    return 0;
}
