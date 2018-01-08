#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100],str[200];
gets(str1);
gets(str2);
int len1=strlen(str1);
int len2=strlen(str2);
strcpy(str,str1);
int j=0;
for(int i=len1+1;i<len1+len2+1;i++)
{
str[i]=str2[j];
j++;
}
for(int i=0;i<len1+len2+1;i++)
printf("%c",str[i]);
}