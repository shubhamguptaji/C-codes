#include<stdio.h>
#include<ctype.h>
void main()
{	
FILE*f1;
char ch,fname[20],d;
f1=fopen(fname,"w");
printf("\nEnter File Name :");
scanf("%s",& fname);
f1=fopen(fname,"r");
if(f1==NULL)
{
printf("File can't be Opened");
}
while(ch!=EOF)
{
d=toupper(ch);
printf("%c",d);
ch=fgetc(f1);                       
}
fclose(f1);                     
}
