#include<stdio.h>
void main(int argc,char *argv[],char *envp[])
{
int i;
for(i=0;envp[i]!='\0';i++)
printf("%s\n",envp[i]);
}