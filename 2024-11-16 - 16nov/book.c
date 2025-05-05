#include<stdio.h>
#include<string.h>
struct books
  {
    int book_id;
    char title[40];
  }
  books1,books2;
 int main()
 {
   	books1.book_id=2305289;
  	strcpy(books1.title,"C PROGRAMMING");
  	books2.book_id=2305288;
  	strcpy(books2.title,"JAVA PROGRAMMING");
        printf("BOOK NAME IS %s\n", books2.title);
	printf("BOOK ID NUMBER IS %d\n", books2.book_id);
	printf("BOOK NAME IS %s\n", books1.title);
	printf("BOOK ID NUMBER IS %d\n", books1.book_id);
	return 0;	
  }
