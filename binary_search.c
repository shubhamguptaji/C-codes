#include<stdio.h>
void main()
{
int m[50],n;
printf("how many values do you want to enter\n");
scanf("%d",&n);
printf("enter the values");
for(int i=0;i<n;i++)
scanf("%d",&m[i]);
printf("enter the value you want to search\n");
int num;
scanf("%d",&num);
int first=0,last=n-1,mid;
mid=(last+first)/2;
while(first<last && mid!=num)
{
if(mid<num)
first=mid+1;
else
last=mid-1;
mid=(first+last)/2;
}
if(mid==num)
printf("number found");
else
printf("number not found");
}