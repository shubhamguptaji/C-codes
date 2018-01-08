#include<stdio.h>
void main()
{
int m[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&m[i][j]);
}
printf("entered array is:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
printf("%d ",m[i][j]);
printf("\n");
}
}