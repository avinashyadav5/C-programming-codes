#include<stdio.h>

int main()
  { 
        int d;
        printf("enter size of array\n");
        scanf("%d",&d);
        int a[d];
        int *p;
        p=a;
        for(int i=0;i<d;i++)
        {
          scanf("%d",a+i);
        }
        printf("OUTPUT :\n");
        for(int i=0;i<d;i++)
        {
          printf("%d\n",*(a+i));
        }
   }     
  		
