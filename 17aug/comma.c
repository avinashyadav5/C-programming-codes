#include <stdio.h>
  int main()
	{
		int n,result;
		printf("enter a no. \n");
		scanf("%d",&n);
		printf("entered value is %d \n",n);
		result=(n++,n);
		printf("assigned value is %d \n",result);
	  return 0;
	}   
