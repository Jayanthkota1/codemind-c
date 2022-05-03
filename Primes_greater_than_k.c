#include<stdio.h>
int main()
{
    int n,a[30],b,i,j,c=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            continue;
        }
        c=0;
        if(a[i]>=b)
        {
            for(j=2;j<a[i];j++)
            {
                if(a[i]%j==0)
                {
                    c++;
                }
            }
            if(c==0)
        {
            p++;
        }
        }
        
    }
    printf("%d",p);
}