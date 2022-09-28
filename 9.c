// 9. Write a program to store information of n students and display them using structure

#include<stdio.h>

struct student
    {
       int roll_no;
       char name[30];
       float marks;
    };

void input(struct student [],int);
void display(struct student [],int);

int main()
{
    int n;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    struct student S[n];
    input(S,n);
    display(S,n);
    return 0;
}

void input(struct student a[ ],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
      printf("Enter Information of Student %d: \n",i+1);
      printf("Roll No: ");
      scanf("%d",&a[i].roll_no);
      fflush(stdin);
      printf("Name: ");
      gets(a[i].name);
      fflush(stdin);
      printf("Enter Marks: ");
      scanf("%f",&a[i].marks);
    }
}
void display(struct student a[ ],int size)
{
    int i;
    printf("------Displaying Information------\n");
    for(i=0;i<size;i++)
    {
      printf(" %d. Roll No:%2d.  Name: %5s.   Marks: %f.\n",i+1,a[i].roll_no,a[i].name,a[i].marks);
    }
}
