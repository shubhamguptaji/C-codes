#include<stdio.h>
#include<string.h>
void main()
{
char str[80],str1[80];
int j=0;
gets(str);
int len=strlen(str);
for(int i=len-1;i>=0;i--)
{
str1[j]=str[i];
j++;
}
printf("original string is:");
puts(str);
printf("\nreversed string is:");
for(int i=0;i<len;i++)
printf("%c",str1[i]);
}
