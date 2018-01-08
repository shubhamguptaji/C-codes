#include<stdio.h>
void main()
{
int num,flag=0;
scanf("%d",&num);
for(int i=2;i<num;i++)
{
if(num%i==0)
{
flag=1;
break;
}
else
flag=0;
}
if(flag==1)
printf("not prime");
else
printf("prime");
}