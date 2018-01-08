#include<stdio.h>
struct student
{
int r_no;
char name[20];
char course[20];
int fees;
};
int main()
{
struct student stud1,stud2,*ptr_stud1,*ptr_stud2;
int n,i;
scanf("%d",&n);
scanf("%d",&i);
ptr_stud1= (struct student*) malloc(n * sizeof(struct student));
for(int j=0;j<n;j++)
{
    scanf("%d",&(ptr_stud1+j)->r_no);
    scanf("%s",&(ptr_stud1+j)->name);
    scanf("%s",&(ptr_stud1+j)->course);
    scanf("%d",&(ptr_stud1+j)->fees);
}
printf("%d\n",(ptr_stud1+i)->r_no);
printf("%s\n",(ptr_stud1+i)->name);
printf("%s\n",(ptr_stud1+i)->course);
printf("%d\n",(ptr_stud1+i)->fees);


    return 0;
}