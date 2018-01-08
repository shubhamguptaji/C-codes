#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
for(int j=0;j<num;j++)
{	
for(int i=0;i<num-j;i++)
{
printf("--");
}
for(int i=0;i<=j;i++)
	printf("%c-",96+num-i);
for(int i=j-1;i>=0;i--)
	printf("%c-",96+num-i);
for(int i=num-j;i>=0;i--)
	printf("--");
printf("\n");
}
int i;
for(int j=0;j<num;j++)
{
for(i=0;i<j;i++)
	printf("--");
for(i=0;i<num-j;i++)
	printf("%c-",96+num-i);
for(i;i>=0;i--)
	printf("%c-",96+num-i);
for(i=j;i>=0;i--)
	printf("--");

printf("\n");
}
for(i=0;i<num;i++)
	printf("--");
printf("%c-",96+num);
for(i=0;i<=num;i++)
	printf("--");
return 0;
}