// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

#include<stdio.h>

struct employee
    {
       int id;
       char name[30];
       float salary;
    };

void input(struct employee []);
void highest(struct employee []);

int main()
{
    struct employee E[10];
    input(E);
    highest(E);
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
void highest(struct employee a[ ])
{
    int i,s=0;
    float max;

    max=a[0].salary;
    for(i=1;i<10;i++)
    {
        if((a[i].salary)>max)
         {
            max=a[i].salary;
            s=i;
         }
    }
    printf("Highest Salaried Employee is %d, whose Salary is %f.",s+1,max);
}
