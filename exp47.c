#include<stdio.h>
typedef struct
{
int hour;
int min;
int sec;
}time;
int main()
{
time t1,t2,t3;
printf("//Difference of time period//\n\n");
printf("Enter time (1)\n");
scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
printf("\nEnter time (2)\n");
scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
t3.hour=t1.hour-t2.hour;
t3.min=t1.min-t2.min;
t3.sec=t1.sec-t2.sec;
while(t3.sec>=60)
{
t3.min++;
t3.sec=t3.sec-60;
}
while(t3.min>=60)
{
t3.hour++;
t3.min=t3.min-60;
}
printf("\nDifference is\n");
printf("%d hours %d mins %d secs !!!\n",t3.hour,t3.min,t3.sec);
}
