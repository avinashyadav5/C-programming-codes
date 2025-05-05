#include<stdio.h>
#include<string.h>
struct book
  {
    int bookid;
    char bookname[40];
    int bookpages;
    char bookauthor[40];
      }
  book[4];
 int main()
 { 
      for(int i=0;i<4;i++)
      {
       printf("enter book %d details\n",(i+1));
   	printf("enter book id\n");
   	scanf("%d",&book[i].bookid);
   	printf("enter book name\n");getchar();
  	scanf("%[^\n]s",book[i].bookname);
        printf("enter number of pages\n");
        scanf("%d",&book[i].bookpages);
        printf("enter book author\n");getchar();
        scanf("%[^\n]s",book[i].bookauthor);
      }
       for(int i=0;i<4;i++)
       {
        printf("\n book %d all details\n",(i+1));
        printf(" book  id %d \n",book[i].bookid);
        printf(" book name %s \n",book[i].bookname);
        printf(" number of pages %d\n",book[i].bookpages);
        printf(" book author %s \n",book[i].bookauthor);
       }
	return 0;
  }
