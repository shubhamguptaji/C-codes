#include<stdio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("E:\\myFile.txt","r");
if(fp==NULL)
printf("File could not be opened");
else
{
ch=fgetc(fp);
while(ch!=EOF)
{
printf("%c",ch);
ch=fgetc(fp);
}
}
fclose(fp);
getch();
return 0;
}
