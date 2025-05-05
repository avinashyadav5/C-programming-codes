#include <stdio.h>
int main()
{
   int position, c, n;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
    int a[n];
   printf("Enter %d elements\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &a[c]);
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         a[c] = a[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d ", a[c]);
   }
   return 0;
}
