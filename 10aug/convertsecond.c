#include<stdio.h>
int main()
{
  int hr_288, min_288, sec_288;
  printf("enter the value of time is sec \n");
  scanf("%d",&sec_288);
  min_288=sec_288/60;
  hr_288=min_288/60;
  min_288=hr_288%60;
  sec_288=min_288%60;
  printf("the value of time is %d hr %d min %d sec\n",hr_288,min_288,sec_288);
  return 0;
}
