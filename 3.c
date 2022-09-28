// 3. Write a function to display employee data. [ Refer structure from question 1 ]

#include<stdio.h>

struct employee
    {
       int id;
       char name[30];
       float salary;
    };

void input(struct employee []);
void display(struct employee []);

int main()
{
    struct employee E[10];
    input(E);
    display(E);
    return 0;
}

void input(struct employee a[ ])
{
    int i;
    for(i=0;i<10;i++)
    {
      printf("Enter I'D, Name and Salary of %d Employees: \n",i+1);
      scanf("%d",&a[i].id);
      fflush(stdin);
      gets(a[i].name);
      fflush(stdin);
      scanf("%f",&a[i].salary);
    }
}
void display(struct employee a[ ])
{
    int i;
    printf("------Displaying Information------\n");
    for(i=0;i<10;i++)
    {
      printf("I'd: %d.  Name: %s.  Salary: %f.\n",a[i].id,a[i].name,a[i].salary);
    }
}
