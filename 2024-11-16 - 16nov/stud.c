#include<stdio.h>
#include<string.h>
struct student
  {
    int id;
    char name[40];
    float cgpa;
    char sec[30];
  }
  std1,std2;
 int main()
 {
   	std1.id=2305289;
  	strcpy(std1.name,"Ayush raj");
  	 strcpy(std1.sec,"A26");
  	 std1.cgpa=10.00;
  	 std2.id=2305288;
  	 strcpy(std2.name,"Avinash yadav");
  	 strcpy(std2.sec,"A26");
  	 std2.cgpa=9.999;
        printf("My name is %s\n", std2.name);
	printf("My roll number is %d\n", std2.id);
	printf("My section is %s\n", std2.sec);
	printf("I attained a cgpa of %lf in my college \n", std2.cgpa);
	printf("My friend's name is %s\n", std1.name);
	printf("My friend's roll number is %d\n", std1.id);
	printf("My friend's section is %s\n", std1.sec);
	printf("He attained a cgpa of %lf in my college  \n", std1.cgpa);
	return 0;
	
  }
