#include<stdio.h>
int fact(int n)
{
int temp=1;
while(n)
temp=temp*n--;
return temp;
}
int main()
{
int i,j,n,size;
float z;
printf("enter the total no. of values in table");
scanf("%d",&n);
size=n-1;
float x[n],y[n];
printf("values of x and y are \n");
for(i=0;i<n;i++)
scanf("%f%f",&