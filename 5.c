// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]

#include<stdio.h>

struct employee
    {
       int id;
       char name[30];
       float salary;
    };

void input(struct employee [], int);
void sort_salary(struct employee [], int);

int main()
{
    int n;
    printf("Enter Number of Employees: ");
    scanf("%d",&n);
    struct employee E[n];
    input(E,n);
    sort_salary(E,n);
    return 0;
}

void input(struct employee a[ ],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("Enter I'D, Name and Salary of %d Employees: \n",i+1);
      printf("I'D: ");
      scanf("%d",&a[i].id);
      fflush(stdin);
      printf("Name: ");
      gets(a[i].name);
      fflush(stdin);
      printf("Salary: ");
      scanf("%f",&a[i].salary);
    }
    printf("----Sorted Values are: \n");
}

void sort_salary(struct employee a[ ],int n)
{
    int i,j;
    float min;

    for(i=0;i<n-1;i++)
    {
        min=a[i].salary;
        for(j=i+1;j<n;j++)
         {
            if((a[j].salary)<min)
             {
                min=a[j].salary;
                a[j].salary=a[i].salary;
                a[i].salary=min;
             }
         }
    }
    for(i=0;i<n;i++)
    {
      printf("%d. %f   ",i+1,a[i].salary);
    }
}