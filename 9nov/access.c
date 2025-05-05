#include<stdio.h>
int main()
{
  int num;
  printf("enter value\n");
  scanf("%d",&num);
  int *ptr;
  ptr=&num;
  printf("the value of number is %d\n",num);
  printf("the address of number is %p\n",&num);
  printf("the value of number is %d\n",*ptr);
  printf("the address of number is %p\n",ptr);
 } 
  
