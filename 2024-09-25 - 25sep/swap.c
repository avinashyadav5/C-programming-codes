#include<stdio.h>
void swap(int n1,int n2);
int main()
  {
      int a,b,result;
      printf("enter two numbers\n");
      scanf("%d %d",&a,&b);
      printf("value 1 before swapping %d\n",a);
      printf("value 2 before swapping %d\n",b);
      swap(a,b);
    return 0;
  }
 void swap(int n1,int n2)
  {
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("value 1 after swapping %d\n",n1);
    printf("value 2 after swapping %d\n",n2);
  }

