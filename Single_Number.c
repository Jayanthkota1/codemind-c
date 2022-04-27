#include<stdio.h>
int main()
{
    int n,a[200],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=-1;
                a[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
     {
           printf("%d ",a[i]);
       }
    }
}