#include<stdio.h>
int main()
{
    int n,a[20],i,d,c=0,k,p;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]==0)
        {
            c=1;
        }
       // printf("%d ",a[i]);
        
        while(a[i]!=0)
        {
            d=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        if(k==c)
        {
          p++;
        }
        
    }
    printf("%d",p);
}