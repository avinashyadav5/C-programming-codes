#include<stdio.h>

int main()
  { 
        int d,sum=0;
        float avg=0.0;
        printf("enter size of array\n");
        scanf("%d",&d);
        int a[d];
        int *p;
        p=a;
        for(int i=0;i<d;i++)
        {
          scanf("%d",a+i);
          sum+=*(a+i);
        }
        avg=sum/d;
        printf("sum is %d \n",sum);     
        printf("avg is %f \n",avg); 
   }     
  		
