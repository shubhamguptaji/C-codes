#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(char str[102][20],int *roll,int n)
{
    int i,index,j,min;
    for(i=0;i<n-1;i++)
    {
        min=roll[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(roll[j]<min)
            {
                index=j;
                min=roll[j];
            }
        }
        if(index!=i)
            swap(roll,str,index,i);
    }
}

void swap(int* r,char** s,int i,int j)
{
    int temp;
    char* stemp=(char*)malloc(20*sizeof(char));
    temp=r[i];
    r[i]=r[j];
    r[j]=temp;
    strcpy(stemp,s[i]);
    strcpy(s[i],s[j]);
    strcpy(s[j],stemp);
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    if(n<1 || n>100)
    {
        printf("CAN'T SORT");
        return 0;
    }
    int* roll=(int*)malloc(n*sizeof(int));
    char** str=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
        str[i]=(char*)malloc(20*sizeof(char));
    for(i=0;i<n;i++)
        scanf("%d %s",roll+i,str[i]);
    
    sort(str,roll,n);
    
    for(i=0;i<n;i++)
        printf("%d %s\n",*(roll+i),str[i]);
    
    return 0;
}