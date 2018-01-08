#include<stdio.h>
#include<string.h>
char str[200];
char* MergeStrings(char *str1,char *str2)
{
    int len1=strlen(str1),len2=strlen(str2);
    strcpy(str,str1);
    char temp;
    int j=0,i;
    for(i=len1;i<len1+len2;i++)
    {
        str[i]=str2[j];
        j++;
    }

    for(i=0;i<len1+len2-1;i++)
    {
        for(j=0;j<len1+len2-1;j++)
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
    }
    return str;
}
int main()
{
char str1[100],str2[100],*str3;
scanf("%s%s",str1,str2);
str3=MergeStrings(str1,str2);
printf("%s",str3);
return 0;
}
