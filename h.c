#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);
fflush(stdin);
int i,a=n;
for(i=0;n!=0;i++)
n/=10;
printf("%d",i);
int b=pow(10,i-1);
for(int j=0;j<i;j++)
{
int c=a%10;
int d=a/10;
a=(c*b)+d;

printf("%d\n",a);
}
}