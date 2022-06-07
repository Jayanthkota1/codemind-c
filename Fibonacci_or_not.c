#include<stdio.h>
int main()
{
    int n,x=0,n1=0,n2=1,n3,i;
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("True");
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            n3=n1+n2;
            if(n3==n)
            {
                printf("True");
                x=1;
                break;
            }
            n1=n2;
            n2=n3;
        }
        if(x==0)
        {
            printf("False");
        }
    }
    
    return 0;
}