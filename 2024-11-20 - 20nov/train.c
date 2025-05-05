#include<stdio.h>
#include<string.h>
struct train
  {
    int trainid;
    char trainname[40];
    int fromstdcode;
    int tostdcode;
  }
  train1,train2;
 int main()
 {
   	printf("enter train id\n");
   	scanf("%d",&train1.trainid);
   	printf("enter train name\n");getchar();
  	scanf("%[^\n]s",train1.trainname);
        printf("enter from station code\n");
        scanf("%d",&train1.fromstdcode);
        printf("enter to station code\n");
        scanf("%d",&train1.tostdcode);
   	printf("enter train id\n");
   	scanf("%d",&train2.trainid);
   	printf("enter train name\n");getchar();
  	scanf("%[^\n]s",train2.trainname);
        printf("enter from station code\n");
        scanf("%d",&train2.fromstdcode);
        printf("enter to station code\n");
        scanf("%d",&train2.tostdcode);
        printf("\n train 1 all details\n");
        printf(" train 1 id %d\n",train1.trainid);
        printf(" train 1 name %s\n",train1.trainname);
        printf(" from station code %d\n",train1.fromstdcode);
        printf(" tostation code %d\n",train1.tostdcode);
        printf("\n train 2 all details\n");
        printf(" train 2 id %d\n",train2.trainid);
        printf(" train 2 name %s\n",train2.trainname);
        printf(" train 2 from station code %d\n",train2.fromstdcode);
        printf(" train 2 to station code %d\n",train2.tostdcode);
	return 0;
  }
