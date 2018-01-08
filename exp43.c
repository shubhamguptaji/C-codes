#include<stdio.h>
int main()
{
struct student
{
char name[100];
int rollnum;
float marks;	
}s1;
printf("Enter name\n");
scanf("%[^\n]",s1.name);
printf("Enter roll number\n");
scanf("%d",&s1.rollnum);
printf("Enter marks\n");
scanf("%f",&s1.marks);
printf("\nentered details are\n");
printf("Name is %s.",s1.name);
printf("\nRoll number is %d.",s1.rollnum);
printf("\nMarks are %f\n.",s1.marks);
}
