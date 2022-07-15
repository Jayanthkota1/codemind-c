#include<stdio.h>
int main()
{
    int n,m,a[30],b[30],i,j,t,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t && b[i]>=t)
        {
            c++;
        }
    }
    printf("%d",c);
}