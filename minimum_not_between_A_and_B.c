#include<stdio.h>
int main()
{
    int p=0,n,k[200],a,b,i,max=999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(k[i]<a || k[i]>b)
        {
            p++;
            if(k[i]<max)
            {
                max=k[i];
            }
        }
    }
    if(p!=0)
    {
    printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}