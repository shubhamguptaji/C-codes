#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
int countch=0,countspace=0,vowels=0,digits=0;
printf("enter the string\n");
gets(str);
int len=strlen(str);
for(int i=0;i<len;i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
vowels++;
else
if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i] <='Z')) 
countch++;
else
if(str[i]>='0' && str[i]<='9')
digits++;
else
if(str[i]==' ')
countspace++;
}
printf("number of consonants are:%d\n",countch);
printf("number of vowels are:%d\n",vowels);
printf("number of whitespaces are:%d\n",countspace);
printf("number of digits are:%d\n",digits);
} 