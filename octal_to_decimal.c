#include<stdio.h>
#include<math.h>
int main()
{
int num;
printf("enter a number in decimal form\n");
scanf("%d",&num);
int i=0,a[20];
while(num>=0)
{
a[i]= num%8;
num/=8;
i++;
if(num<8)
{
a[i]=num;
break;
}
}
printf("its octal number is:");
for(int j=i;j>=0;j--)
printf("%d",a[j]);
printf("\nenter number in octal\n");
scanf("%d",&num);
int n=num,decimal=0,j;
i=0;
while(num>0)
{
num/=10;
i++;
}
i--;
int k;
while(n>0)
{
k=pow(10,i);
j=n/k;
decimal=decimal+(pow(8,i)*j);
n/=10;
i--;
}
printf("decimal equivalent is %d\n",decimal);
}