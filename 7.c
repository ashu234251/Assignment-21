// 7. Write a program to calculate the difference between two time periods.

#include<stdio.h>

struct time
{
    int h,m,s;
};

int main()
{
   struct time a[2];
   int i,diff;
   for(i=0;i<2;i++)
   {
    printf("Enter %d Time Period: \n",i+1);
    printf("Hour: ");
    scanf("%d",&a[i].h);
    printf("Minutes: ");
    scanf("%d",&a[i].m);
    printf("Seconds: ");
    scanf("%d",&a[i].s);
   } 

   diff=((a[0].h*3600)+(a[0].m*60)+a[0].s)-((a[1].h*3600)+(a[1].m*60)+a[1].s);
   if(diff<0)
    diff=-diff;

   printf("Difference is %d Hours %d Minutes %d Seconds.",diff/3600,(diff%3600)/60,(diff%60)%60);

}
   
