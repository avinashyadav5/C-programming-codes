#include <stdio.h>  
int main ()  
{   
    int i, j, k, n;     
    printf ("enter the size of elements in an array: ");  
    scanf (" %d", &n);  
    int a[n];
    printf ("\nEnter elements of an array: \n ");  
    for (i =0;i<n;i++)  
    {  
        scanf(" %d", &a[i]);  
    }   
    for (i=0;i<n;i++)  
    {  
        for (j=i+1;j<n;j++)  
        {  
            if (a[i]==a[j])  
            {  
                for (k=j;k<n-1;k++)  
                {  
                    a[k]=a[k + 1];  
                }   
                n--;        
            }  
        }  
    }  
    printf ("\n Array elements after deletion of the duplicate elements: ");  
    for (i=0;i<n;i++)  
    {  
        printf (" %d ", a[i]);  
    }  
    return 0;  
}  
