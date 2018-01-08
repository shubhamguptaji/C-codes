#include<stdio.h>
#include<stdlib.h>	
void main(int argv,char *argc[])
{
float sum = 0;
int i;
for(i=1;i<argv;i++)
sum+=atof(argc[i]);
printf("\n%f\n",sum);
}
