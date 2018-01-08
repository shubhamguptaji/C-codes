#include<stdio.h>
#include<string.h>
void print(char *a)
{
if( *a)
{
print(a+1);
printf("%c",*a);
}
}
int main()
{
char str[100];
gets(str);
print(str);
return 0;
}
