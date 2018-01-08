#include<stdio.h>
#include<math.h>
int main()
{
int a[20],n,sum=0;
float total=0;
printf("enter the number of elements\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
int mean=sum/n;
for(int i=0;i<n;i++)
total=total+pow(a[i]-mean,2);
total=total/n;
float sd=sqrt(total);
printf("standard deviation is: %f\n",sd);
}