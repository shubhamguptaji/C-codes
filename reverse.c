#include<stdio.h>
#include<string.h>
void reverse(char str[100],int n)
{
char str1[100];
int j=0;
for(int i=n-1;i>=0;i--)
{
str1[j]=str[i];
j++;
}
printf("reverse string is \n");
for(int j=0;j<n;j++)
printf("%c",str1[j]);

}
void main()
{
int n;
char str[100];
printf("enter the string\n");
gets(str);
n=strlen(str);
reverse(str,n);
}
