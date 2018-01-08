#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
int n=num;
int i=0;
int a[20];
while(num>=1)
{
a[i]=num%2;
num/=2;
i++;
}
i--;
for(int j=i;j>=0;j--)
printf("%d ",a[j]);
printf("\nenter the number in binary form\n");
scanf("%d",&num);
n=num;
i=1;
while(num!=0)
{
num/=10;
i++;
}
i=i-2;
int j,k,sum=0;
while(n>0)
{
k=pow(10,i);
j=n/k;
sum=sum+(pow(2,i)*j);
n/=10;
i--;
}
printf("its decimal equivalent is : %d\n",sum);
}
