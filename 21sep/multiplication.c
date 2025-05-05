#include <stdio.h>
int main() 
{
    int a1[3][3];
    int b2[3][3];
    int c[3][3];
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter elements in row %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) 
    { 
       printf("Enter element int row %d \n", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &b2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            {
                c[i][j] += a1[i][k] * b2[k][j];
            }
        }
    }
    printf("\nResultant matrix after multiplication:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
      return 0;
}

