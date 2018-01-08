#include<stdio.h>
#include<string.h>
int main()
{
char ch,*pch=&ch;
int u=0,l=0;
scanf("%c",pch);
while(*pch!='*')
{
    if(*pch>='A' && *pch<='Z')
        u++;
    else
        if(*pch>='a' && *pch<='z')
            l++;
scanf("%c",pch);
}


printf("Total no. of upper case character =%d\n",u);
printf("Total no. of lower case charater =%d",l);
return 0;
}