#include<stdio.h>
 int main()
  {
	int marks;
	printf("enter marks obtained\n");
	scanf("%d",&marks);
	if(marks<=100 && marks >=90)
		{
		    printf("secured marks is %d\n",marks);
			printf("secured grade is O \n");
		}
	else if(marks<=89 && marks >=80)
		{
			printf("secured marks is %d\n",marks);
			printf("secured grade is E\n ");
		}
	else if(marks<=79 && marks >=70)
		{
			printf("secured marks is %d\n",marks);
			printf("secured grade is A \n");
		}
	else if(marks<=69 && marks >=60)
		{
			printf("secured marks is %d\n",marks);
			printf("secured grade is B \n");
		}
	else if(marks<=59 && marks >=50)
		{
			printf("secured marks is %d\n",marks);
			printf("secured grade is C \\\n");
		}
	else if(marks<=49 && marks >=40)
		{
			printf("secured marks is %d\n",marks);
			printf("secured grade is D\n");
		}
	else if(marks<40)
		{
			printf("secured marks is %d\n",marks);
			printf("secured grade is F \n");
		}
	else
		{
			printf("invalid   marks entered \n");
		}
  }

