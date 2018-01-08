#include<stdio.h>
int main()
{
int num=26;
for(int j=0;j<num;j++)
{
for(int i=0;i<j;i++)
	printf("--");
for(int i=0;i<num-j;i++)
	printf("%c-",122-i);
for(int i=1;i<num-j;i++)
	printf("%c-",97+i+j);
for(int i=j;i>=0;i--)
	printf("--");
printf("\n");
}
return 0;
}