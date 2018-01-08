#include<stdio.h>
#include<string.h>
void main()
{
char word[20][30];
int m;
char temp[30];
printf("enter the number of words\n");
scanf("%d",&m);
int a[m];
printf("enter words\n");
for(int i=0;i<m;i++)
scanf("%s[^\n]",word[i]);
for(int i=0;i<m;i++)
{
for(int j=i+1;j<m;j++)
{
if(strcmp(word[i],word[j])>0)
{
strcpy(temp,word[j]);
strcpy(word[j],word[i]);
strcpy(word[i],temp);
}
}
}
printf("In lexological order\n");
for(int i=0;i<m;i++)
{
puts(word[i]);
}
}
