#include <stdio.h>
 int main()
  {
	int marks;
	printf("enter marks obtained\n");
	scanf("%d",&marks);
	int mark=marks;
	if(marks<=100)
		{
			mark=marks/10;
	switch(mark)
		 {
			case 10:
			case 9:
					{
						printf("marks obtained %d\n",marks);
						printf("grade is O \n");
					}
			break;
			case 8:
					{
						printf("marks obtained %d\n",marks);
						printf("grade is E\n");
					}
			break;
			case 7:
					{
						printf("marks obtained %d\n",marks);
						printf("grade is A\n");
					}
			break;
			case 6:
					{
						printf("marks obtained %d\n",marks);
						printf("grade is B\n");
					}
			break;
			case 5:
					{
						printf("marks obtained %d\n",marks);
						printf("grade is C\n");
					}
			break;
			case 4:
					{
						printf("marks obtained %d\n",marks);
						printf("grade is\n");
					}
			break;
			case 3:
			case 2:
			case 1:
			case 0:
					{
						printf("marks obtained %d\n",marks);
						printf("grade \n");
					}
			break;
		 }
		}
	else 
		printf("enter valid marks\n");
  }

