#include<stdio.h>
#include<stdlib.h>
void main(int argv,char *argc[])
{
int sum = 0;
int i;
for(i=1;i<argv;i++)
sum+=atoi(argc[i]);
printf("\n%d\n",sum);
}
