#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    {
        for(i=2;i<=pow(n,0.5);i++)
        {
            if(n%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(prime(i))
        {
            for(j=2;j<=n/2;j++)
            {
                if(prime(j))
                {
                    if(i*j==n)
                    {
                        c=1;
                        printf("%d %d",i,j);
                        break;
                    }
                }
            }
            if(c==1)
            {
                break;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}