#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0,b;
    b=int(pow(n,0.5));
    for(i=2;i<=int(b);i++)
    {
        if(n%i==0)
        {
            c++;
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
int main()
{
    int a,b,i,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i==1)
        {
            continue;
        }
        if(prime(i))
        {
            c++;
        }
    }
    printf("%d",c);
}