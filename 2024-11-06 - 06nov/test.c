#include<stdio.h>
void swap(int ar[],int d);
int main()
{
int a,b,d=0,ar[100];
printf("enter range\n");
scanf("%d %d",&a,&b);
 int c=0;
   //printf("prime no.\n");
 for(int i=a;i<=b;i++)
 { 
  c=0;
  for(int j=1;j<=i;j++)
  {
   if(i%j==0)
   c++;
  }

  if(c==2)
  {
   ar[d]=i;
   d++;
  }
  }  
  printf("\n");
  for(int i=0;i<d;i++)
  {
   printf("%d ",ar[i]);
  }
  swap(ar,d);
  return 0;
 }
 void swap(int ar[],int d)
 {
 printf("\nafter swapping\n");
  for(int i=0;i<d-1;i=i+2)
  {
   int temp=ar[i];
   ar[i]=ar[i+1];
   ar[i+1]=temp;
  }
   printf("\n");
  for(int i=0;i<d;i++)
  {
   printf("%d ",ar[i]);
  }
  //return 0;
 }
   
