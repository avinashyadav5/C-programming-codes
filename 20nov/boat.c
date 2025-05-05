#include <stdio.h>
struct boat
{
char name[20];
int seatnum;
float fare;
};
 int main()
  {
int n;
struct boat ticket [4]= {
                         {"Vikram", 1,15.50}, 
                         {"Krishna", 2,15.50}, 
                         {"Ramu", 3,25.50}, 
                         {"Gouri", 4,25.50}
                        }; 
      printf("\n Boarder Ticket num. Fare");
       for(n=0;n<=3;n++)
          printf("\n %s %d %f", ticket [n].name, ticket [n]. seatnum, ticket [n].fare);
     return 0;
   }
