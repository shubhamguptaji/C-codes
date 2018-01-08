#include <stdio.h> 
int main()	
{
FILE *fp1, *fp2;
char ch1, ch2;
int flag = 0; 
fp1 = fopen("hello.txt",  "r");
fp2 = fopen("hi.txt", "r");
if (fp1 == NULL||fp2 == NULL)
printf("File can't be opened");
else
{
while (((ch1 = fgetc(fp1)) != EOF) &&((ch2 = fgetc(fp2)) != EOF))
{
if (ch1 == ch2)
{
flag = 1;
continue;
}
else
{
fseek(fp1, -1, SEEK_CUR);        
flag = 0;
break;
}
} 
if (flag == 0)
printf("Two files are not equal :\n\n  byte poistion at which two files differ is %d\n", ftell(fp1)+1);
else
printf("Two files are Equal\n ", ftell(fp1)+1);
}
}
