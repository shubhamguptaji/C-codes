#include<stdio.h>
#include<string.h>
void main()
{
int len=0,i;
char str[40],ch;
printf("enter the string\n");
gets(str);
printf("enter the character to be searched\n");
scanf("%c",&ch);
len=strlen(str);
for(i=0;i<len;i++)
if(ch==str[i])
break;
if(i==len)
printf("character not found");
else
printf("character found");
}