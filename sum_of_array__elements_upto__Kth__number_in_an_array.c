#include<stdio.h>
int main()
{
    int n,a[20],b,i,s=0,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            ind=i;
            break;
        }
    }
    for(i=0;i<=ind;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}