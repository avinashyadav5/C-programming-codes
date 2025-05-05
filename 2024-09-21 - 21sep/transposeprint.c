#include <stdio.h>
int main()
{   
    int n,m;
    printf("enter row and column\n");
    scanf("%d %d",&n,&m);
    int a[n][m]; 
    int i, j; 
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < n; i++) 
    {
        printf("enter elements in row %d\n",i+1);
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnterd Array \n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j< m; j++) 
        {
            printf("%d  ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("\nTransposed Array \n");   
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j< m; j++) 
        {
            printf("%d  ",a[j][i]);
            
        }
        printf("\n");
    }
    return 0;
}

