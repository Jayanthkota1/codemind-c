#include<stdio.h>
int prime(int n)
{
    int k,d,r=0;
    k=n;
    while(k)
            {
              d=k%10;
              r=r*10+d;
              k=k/10;
            }
            if(n==r)
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
    int b,i,a;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i))
        {
            printf("%d ",i);
        }
        
    }
}