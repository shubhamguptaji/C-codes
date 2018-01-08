#include<stdio.h>
void main()
{
    int a[50],n,count=0,flag;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
      flag=0;
for(int j=i+1;j<n;j++)
        {
  
            if(a[i]==a[j])
            {
                for(int k=j;k<n;k++)
		{
                    a[k]=a[k+1];
                }
		flag=1;
                
            }
}
if(flag==1)
count++;
        
    }
    for(int i=0;i<=n-count;i++)
        printf("%d\n",a[i]);
}