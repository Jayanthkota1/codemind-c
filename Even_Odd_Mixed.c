#include<stdio.h>
int main()
{
    int n,d,e=0,o=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        if(d%2!=0)
        {
            o++;
        }
        else
        {
            e++;
        }
        n=n/10;
    }
    if(e==0)
    {
        printf("Odd");
    }
    else if(o==0)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}