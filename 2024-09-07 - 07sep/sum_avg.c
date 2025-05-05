#include<stdio.h>
int main()
{
int n,sum=0;
float avg;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int j=0;j<n;j++)
{
sum=sum+a[j];
}
avg=(float)sum/n;
printf("sum of elements is %d\n",sum);
printf("average of elements is %f\n",avg);
return 0;
}
