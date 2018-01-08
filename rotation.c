#include<Stdio.h>
#include<string.h>
void main()
{
char str[80],temp,a;
int n;
printf("enter the string\n");
gets(str);
int len=strlen(str);
printf("enter no. of rotations\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
temp=str[0];
for(int j=0;j<len;j++)
{
str[j]=str[j+1];
}
str[len-1]=temp;
}
for(int i=0;i<len;i++)
printf("%c",str[i]);
}