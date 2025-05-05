#include<stdio.h>
int main()
{
int a[10],key,sorted=0;
printf("enter elements in  arrays \n");
for(int j=0;j<10;j++)
{
scanf("%d",&a[j]);
}
printf("enter value to find \n");
scanf("%d",&key);
for(int i=0;i<(10-1) && sorted==0;i++)
{
sorted=1;
for(int j=0;j<(10-i)-1;j++)
{
if(a[j]>a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
sorted=0;
}
}
}
printf("sorted array   ");
for(int i=0;i<10;i++)
{
printf("%d ",a[i]);
}
//printf("\nnumber in sorted array\n");
int  first=0;int last=(10-1);int middle=(first+last)/2;
while(first<last)
{
if(a[middle]<key)
first=middle+1;
else if(a[middle]==key)
{
printf("\n%d found at location %d\n",key,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first > last)
printf("\nnumber not found");
return 0;
}
