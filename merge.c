#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20],str3[40],temp;
printf("enter first string\n");
gets(str1);
printf("enter second string\n");
gets(str2);
strcpy(str3,str1);
int len1=strlen(str1);
int len2=strlen(str2),j=0;
for(int i=len1;i<len1+len2;i++)
{
str3[i]=str2[j];
j++;
}
for(int i=0;i<len1+len2-1;i++)
{
for(int j=0;j<len1+len2-1;j++)
if(str3[j]>str3[j+1])
{
temp=str3[j];
str3[j]=str3[j+1];
str3[j+1]=temp;
}
}

for(int i=0;i<len1+len2;i++)
printf("%c",str3[i]);
}