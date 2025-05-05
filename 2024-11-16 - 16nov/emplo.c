#include<stdio.h>
#include<string.h>
struct employee
  {
    int age;
    char name[40];
    float salary;
  }
  std1,std2;
 int main()
 {
   	std1.age=23;
  	strcpy(std1.name,"Ayush raj");
  	std1.salary=10000000000.00;
  	std2.age=24;
  	strcpy(std2.name,"Avinash yadav");
  	std2.salary=900000000.999;
        printf("My name is %s\n", std2.name);
	printf("My age is %d\n", std2.age);
	printf("I salary is %lf  \n", std2.salary);
	printf("My friend's name is %s\n", std1.name);
	printf("My friend's roll number is %d\n", std1.age);
	printf("He attained a  salary of %lf  \n", std1.salary);
	return 0;	
  }
