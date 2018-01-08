#include<stdio.h>
#include<math.h>
int main()
{
int m, n, k, p, factor_count,count=0,flag;
for(m=2;count!=100;m++)
{
flag = 1;
for(n=2;n<=sqrt(m);n++)
{
if(!(m%n))
{
flag = 0;
break;
}
}
if(flag)
{
count++;
printf("%d\t",m);
}
}
return 0;
}
