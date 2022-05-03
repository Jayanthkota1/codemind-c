#include<stdio.h>
int main()
{
    int n,a[30],e,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+e;
        {
            if(a[i]<max)
            {
                printf("False ");
            }
            else
            {
            printf("True ");
            }
        }
    }
}