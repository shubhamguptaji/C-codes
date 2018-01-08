#include<stdio.h>
void main()
{
FILE *fp1,*fp2;
char ch,fname1[20],fname2[20];
printf("Enter source file name\n");
gets(fname1);
printf("\nEnter source file name\n");
gets(fname2);
fp1=fopen(fname1,"r");
fp2=fopen(fname2,"a");
if(fp1==NULL||fp2==NULL)
{
printf("unable to open");
}
do
{
ch=fgetc(fp1);
fputc(ch,fp2);
}
while(ch!=EOF);
printf("\nFile appended\n");
fclose(fp1);
fclose(fp2);
}
