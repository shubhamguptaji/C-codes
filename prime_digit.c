#include<stdio.h>
int prime(int num)
{
if(num==2)
return 1;
if(num<2)
return 0;
int flag=0;
for(int i=2;i<num;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==1)
return 0;
else
return 1;
}

int main()
{
int count=0,flag=0,b,j;
int n;
scanf("%d",&n);
while(n>0)
{
int num;
scanf("%d",&num);
for(int i=2;i<1000;i++)
{
j=i;
while(j>0)
{
b=j%10;
if(prime(b))
flag=1;
else
{
flag=0;
break;
}
j/=10;
}
if(flag==1)
{
count++;
if(count==num)
printf("%d\n",i);
}
}
n--;
count=0,flag=0;
}
}