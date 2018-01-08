#include<stdio.h>
void main()
{
int a[5][5],n;
printf("enter the size of matrix");
scanf("%d",&n);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
int j=n-1;
int i=0;
while(j>=0)
{ 
printf("%d\n",a[i][j]);
i++;
j--;
}
}

