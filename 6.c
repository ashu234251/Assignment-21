// 6. Write a function to sort employees according to their names [refer structure from question 1]

#include<stdio.h>
#include<string.h>

struct employee
    {
       int id;
       char name[30];
       float salary;
    };

void input(struct employee [], int);
void sort_name(struct employee [], int);

int main()
{
    int n;
    printf("Enter Number of Employees: ");
    scanf("%d",&n);
    struct employee E[n];
    input(E,n);
    sort_name(E,n);
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
    printf("----Sorted Names are: \n");
}

void sort_name(struct employee a[ ],int n)
{
    int i,j;
    char min[30];

    for(i=0;i<n-1;i++)
    {
        strcpy(min,a[i].name);
        for(j=i+1;j<n;j++)
         {
            if((strcmp(min,a[j].name))!=-1)
             {
                strcpy(min,a[j].name);
                strcpy(a[j].name,a[i].name);
                strcpy(a[i].name,min);
             }
         }
    }
    for(i=0;i<n;i++)
    {
      printf("%d. %s   ",i+1,a[i].name);
    }
}