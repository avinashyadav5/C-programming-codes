#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[999];
    int marks;
};
void accept(struct student list[],int s);
void display(struct student list[],int s);
void bsort(struct student list[],int s);
int main()
{
    struct student data[20];
    int n;
    printf("Number of record you want\n");
    scanf("%d",&n);
    accept(data,n);
    printf("Before sorting\n");
    display(data,n);
    bsort(data,n);
    printf("After sorting\n");
    display(data,n);
    return 0;
}
void accept(struct student list[],int s)
{
    int i;
    for(i=0;i<s;i++)
     {
        printf("Enter the data%d\n",i+1);
        printf("Enter roll no\n");
        scanf("%d",&list[i].rollno);
        printf("Enter name\n");
        gets(list[i].name);
        printf("Enter ]marks\n");
        scanf("%d",&list[i].marks);

     }
}
void display(struct student list[80],int s)
{
    int i;
    printf("Roll no\tNmae\tMarks\n");
    for(i=0;i<s;i++)
     {
        printf("%d\t%s\t%d\n",list[i].rollno,list[i].name,list[i].marks);
     }
}
void bsort(struct student list[80],int s)
{
    int i,j;
    struct student temp;
    for (i=0;i<s-1;i++)
     {
        for(j=0;j<(s-1-i);j++)
        {
            if(list[j].marks<list[j+1].marks)
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
     }
}

