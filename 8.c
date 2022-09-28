// 8. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>

struct student
    {
       int roll_no;
       char name[30];
       float marks;
    };

void input(struct student []);
void display(struct student []);

int main()
{
    struct student S[10];
    input(S);
    display(S);
    return 0;
}

void input(struct student a[ ])
{
    int i;
    for(i=0;i<10;i++)
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
void display(struct student a[ ])
{
    int i;
    printf("------Displaying Information------\n");
    for(i=0;i<10;i++)
    {
      printf(" %2d. Roll No: %3d.  Name: %15s.  Marks: %f.\n",i+1,a[i].roll_no,a[i].name,a[i].marks);
    }
}
