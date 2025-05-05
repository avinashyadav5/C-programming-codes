#include <stdio.h>
  int main()
	{
	 int m_288,km_288;
	 printf("enter value in meter \n");
	 scanf("%d",&m_288);
	 km_288=m_288/1000;
	 m_288=m_288%1000;
	 printf("given value is %d kilometer and %d meters \n",km_288,m_288);
	 return 0;
	}
