#include<stdio.h>
struct student
{
char name[50];
int roll_no;
}s1;
void fun(struct student s1)
{
printf("%s %d",s1.name,s1.roll_no);
}
void main()
{
scanf("%s",&s1.name);
scanf("%d",&s1.roll_no);
fun(s1);
}