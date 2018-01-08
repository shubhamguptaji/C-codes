#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
struct emprec
{
int empid;
char *name;
};
typedef struct emprec emp; 
void insert(char *a);
void display(char *a);
int count;
void main(int argc, char *argv[])
{
int choice;     
while (1)
{
printf("Enter the choice\n");
printf("1-Insert a new record into file\n2-Display the records\n");
printf("3-Exit\n");
scanf("%d",  &choice);
switch (choice)
{
case 1:
insert(argv[1]);
break;
case 2:
display(argv[1]);
break;
case 3:
exit(0);
default:
printf("Enter the correct choice\n");
}
} 
} 
/* To insert a new recored into the file */
void insert(char *a)
{
FILE *fp1;
emp *temp1 = (emp *)malloc(sizeof(emp));
temp1->name = (char *)malloc(200 * sizeof(char)); //allocating memory for pointer 
fp1 = fopen(a, "a+");
if (fp1 == NULL)
perror("");
else
{
printf("Enter the employee id\n");
scanf("%d", &temp1->empid);
fwrite(&temp1->empid, sizeof(int), 1, fp1);
printf("Enter the employee name\n");
scanf(" %[^\n]s", temp1->name);
fwrite(temp1->name, 200, 1, fp1);
count++;
}
fclose(fp1);
free(temp1);
free(temp1->name);
}
/* To display the records in the file */
void display(char *a)
{
FILE *fp1;
char ch;
int var = count;
emp *temp = (emp *)malloc(sizeof(emp));
temp->name = (char *)malloc(200*sizeof(char));
fp1 = fopen(a, "r"); 
if (count == 0)
{
printf("no records to display\n");
return;
}
if (fp1 == NULL)
perror("");
else
{
while(var)    
{
fread(&temp->empid, sizeof(int), 1, fp1);
printf("%d", temp->empid);
fread(temp->name, 200, 1, fp1);
printf(" %s\n", temp->name);
var--;
}
}
fclose(fp1);
free(temp);
free(temp->name);
}
