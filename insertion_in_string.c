#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
scanf("%s",str);
int len=strlen(str);
int loc;
scanf("%d\n",&loc);
scanf("%c",&ch);

for(int i=len-1;i>=loc;i--)
{
str[i+1]=str[i];
}
str[loc]=ch;
for(int i=0;i<len+1;i++)
{
printf("%c",str[i]);
}
return 0;
}