#include<stdio.h>
#include<string.h>
void main()
{
char str[80],str1[80];
printf("enter the string\n");
int j=0;
gets(str);
int len=strlen(str);
while(str[j]!='\0')
{
str1[j]=str[j];
j++;
}
printf("copied string is:\n");
for(int i=0;i<len;i++)
printf("%c",str1[i]);
}