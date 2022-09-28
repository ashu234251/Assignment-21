/*
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*/
#include<stdio.h>

struct student
{
    int c,m,p;
    float per;
};

void input(struct student []);
void display(struct student []);


int main()
{
  struct student s[5];
  input(s);
  display(s);
  return 0;
}

void input(struct student a[5])
{
    int i;
    for(i=0;i<5;i++)
    {
      printf("Enter Marks of Student %d: \n",i+1);
      printf("Chemistry: ");
      scanf("%d",&a[i].c);
      printf("Mathematics: ");
      scanf("%d",&a[i].m);
      printf("Physics: ");
      scanf("%d",&a[i].p);
    }
    printf("-------------------\n");
}

void display(struct student a[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        a[i].per=(a[i].c+a[i].m+a[i].p)*(1.0/3) ;
        printf("Percentage of Student %d is: %f.\n",i+1,a[i].per);
    }
}