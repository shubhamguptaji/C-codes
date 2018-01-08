#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
gets(str1);
gets(str2);
char temp[100];
strcpy(temp,str1);
strcpy(str1,str2);
strcpy(str2,temp);
printf("%s %s",str1,str2);
}