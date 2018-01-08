#include<stdio.h>
void main()
{
int n,j,k;
printf("enter the length\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
printf(" ");
for(k=0;k<=i;k++)
printf("#");
printf("\n");
}
}