#include <stdio.h>
int perfect(int n);
  int main()
   {
    int n;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    perfect(n);
   }
  int perfect(int n)
    {
      int rem,sum=0;
      for (int i = 1; i <= (n-1); i++)
       {
        rem = n % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
       }
      if (sum == n)
        printf("%d is perfect number\n", n);
       else
        printf("%d is not a perfect number\n", n);
     }   
  
