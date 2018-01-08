#include<stdio.h>
void main()
{
int m[3][3],n[3][3],flag=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&m[i][j]);
}
for(int j=0;j<3;j++)
{
for(int i=0;i<3;i++)
n[j][i]=m[i][j];
}

for(int j=0;j<3;j++)
{
for(int i=0;i<3;i++)
{if(m[i][j]=n[i][j])
{
flag=1;
break;
}
}
if(flag==1)
break;
}
if(flag==0)
printf("symmetric\n");
else
printf("not symmetric");
}