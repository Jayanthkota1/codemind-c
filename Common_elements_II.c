#include<stdio.h>
int main()
{
    int n,m,a[30],b[30],i,j,c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
   /* for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("
");
    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }*/
    
    for(i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            continue;
        }
        c=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
              c=1;
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<m;i++)
    {
        if(b[i]==-1)
        {
            continue;
        }
        c=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
              c=1;
            }
        }
        if(c==0)
        {
            printf("%d ",b[i]);
        }
    }
}