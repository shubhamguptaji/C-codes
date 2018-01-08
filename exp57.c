#include<stdio.h>
void main()
{
FILE *fp1,*fp2;
char filename1[20],filename2[20],str[30];
printf("Enter name of first file name\n");
gets(filename1);
printf("Enter name of second file name\n");
gets(filename2);
if((fp1=fopen(filename1,"r"))==0)
printf("Error in opening first file !!");
else if((fp2=fopen(filename2,"w"))==0)
printf("Error in opening second file !!");
else
{
while(fgets(str,sizeof(str),fp1)!=NULL)
fputs(str,fp2);
printf("File copied!!!");
}
fclose(fp1);
fclose(fp2);
}
