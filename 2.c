// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include<stdio.h>
int main()
{
    struct employee
    {
       int id;
       char name[30];
       float salary;
    };

    struct employee E1;
    printf("Enter I'D, Name and Salary of Employee 1: \n");
    scanf("%d",&E1.id);
    fflush(stdin);
    gets(E1.name);
    scanf("%f",&E1.salary);

    printf("%d\n",E1.id);
    printf("%s\n",E1.name);
    printf("%f",E1.salary);
    
    return 0;
    
    
}