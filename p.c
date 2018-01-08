#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cp(char* st,int k,int n)
{
	if(k==(n/2))
		return 1;
	if(st[k]==st[n-k-1])
		return 1*cp(st,++k,n);
	else
		return 0;	
}

int main()
{
	char* st=(char*)malloc(sizeof(char)*1000);
	scanf("%s",st);
	int n=strlen(st);
	int k=0;

	if(cp(st,k,n))
		printf("Yes");
	else
		printf("No");
	return 0;
}