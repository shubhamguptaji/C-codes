#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void sort(int* a,int*b,int n)
{
    int i,j,index,temp;
    for(i=0;i<n;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
            if(a[index]>a[j])
                index=j;
        if(index!=i)
        {
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
            temp=b[i];
            b[i]=b[index];
            b[index]=temp;
        }
    }
}

int rsort(int*a,int i,int n)
{
    int j,index,temp;
    for(i;i<n;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
            if(a[index]>a[j])
                index=j;
        if(index!=i)
        {
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
    return n;
}
void customSort(int* a,int n)
{
    int i,j,count,flag=0,k=0,p=0;
    int* fr=(int*)malloc(n*sizeof(int));
    int* num=(int*)malloc(n*sizeof(int));
    int* st=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]==0)
            continue;
        num[k]=a[i];
        for(j=i+1;j<n;j++)
        {
            if(num[k]==a[j])
            {
                count++;
                a[j]=0;
            }
        }
        fr[k]=count;
        k++;
    }
    for(i=0;i<k;i++)
        for(j=i+1;j<k;j++)
            if(fr[i]==fr[j])
                flag=1;
    if(flag)
    {
        sort(fr,num,k);
        for(i=0;i<k;)
        {
            count=1;
            for(j=i+1;j<k;j++)
            {    
                if(fr[i]==fr[j])
                    count++;
                else
                    break;
            }
            i=rsort(num,i,i+count);
        }
    }
    else
        sort(fr,num,k);
    
    for(i=0;i<k;i++)
        for(j=0;j<fr[i];j++)
            printf("%d\n",*(num+i));
}
int main() {
    int n,i,j;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    customSort(arr,n);
    return 0;
}