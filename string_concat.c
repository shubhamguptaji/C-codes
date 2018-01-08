#include<stdio.h>
#include<string.h>
void main()
{
char str1[50],str2[50],str[100];
printf("enter first string\n");
gets(str1);
printf("enter second string\n");
gets(str2);
int n1=strlen(str1);
int n2=strlen(str2);
for(int i=0;i<n1;i++)
str[i]=str1[i];
for(int i=0;i<n2;i++)
str[i+n1]=str2[i];
for(int i=0;i<n1+n2;i++)
printf("%c",str[i]);
}