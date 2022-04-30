#include<stdio.h>
int main()
{
    int n,a[200],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && a[i]%2==0)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}