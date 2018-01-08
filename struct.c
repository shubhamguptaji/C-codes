#include<stdio.h>
struct employee
{
int emp_id;
char emp_name[50];
int emp_sal;
}e1;
void main()
{
scanf("%d",&e1.emp_id);
scanf("%s",&e1.emp_name);
scanf("%d",&e1.emp_sal);
printf("%d",e1.emp_id);
printf("%s",e1.emp_name);
printf("%d",e1.emp_sal);
}