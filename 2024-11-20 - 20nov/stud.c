#include<stdio.h>
#include<string.h>
struct students
  {
    int id;
    char name[40];
    float cgpa;
    char section[40];
      }
  students[4];
 int main()
 { 
      for(int i=0;i<4;i++)
      {
       printf("enter student %d details\n",(i+1));
   	printf("enter student id\n");
   	scanf("%d",&students[i].id);
   	printf("enter studet name\n");getchar();
  	scanf("%[^\n]s",students[i].name);
        printf("enter cgpa obtained\n");
        scanf("%f",&students[i].cgpa);
        printf("enter section\n");getchar();
        scanf("%[^\n]s",students[i].section);
      }
       for(int i=0;i<4;i++)
       {
        printf("\n book %d all details\n",(i+1));
        printf(" book  id %d \n",students[i].id);
        printf(" book name %s \n",students[i].name);
        printf(" number of pages %f\n",students[i].cgpa);
        printf(" book author %s \n",students[i].section);
       }
	return 0;
  }
