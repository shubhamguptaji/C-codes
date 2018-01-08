#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
int count=0;
printf("enter a sentence:");
gets(str);
int len=strlen(str);
for(int i=0;i<len;i++)
if(str[i]==' '&&str[i]!=str[i+1]&&str[i+1]==h'\0')
count++;
printf("%d",count+1);
}