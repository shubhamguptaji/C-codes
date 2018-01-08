#include<stdio.h>
int main()
{
FILE *fp;
char ch[50];
fp=fopen("E:\\myFile.txt","w");
if(fp==NULL)
printf("File can't be opened");
else
{
printf("Enter string to write in file=\n");
gets(ch);
fputs(ch,fp);
}
fclose(fp);
}
