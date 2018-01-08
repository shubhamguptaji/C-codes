#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
printf("enter the string\n");
gets(str);
int len=strlen(str);
printf("initial characters of words in the above string are:\n");
printf("%c\t",str[0]);
for(int i=0;i<len;i++)
{
if(str[i]==' ')
{
printf("%c\t",str[i+1]);
}
}
}