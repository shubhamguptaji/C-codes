#include<stdio.h>
#include<string.h>
void main()
{
char str[80],str1[80];
printf("enter the string\n");
gets(str);
strcpy(str1,str);
strrev(str);
if(strcmp(str,str1))
printf("not palindrome");
else
printf("palindrome");
}