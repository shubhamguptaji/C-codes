#include<stdio.h>
#include<string.h>
void reverse(char *str,char *revstr)
{
if(*str!='\0')
{
reverse(str+1,revstr-2);
*revstr=*str;

}
printf("%s",revstr);
}
int main()
{
char str[100],revstr[100];
gets(str);
reverse(str,revstr);
return 0;
}