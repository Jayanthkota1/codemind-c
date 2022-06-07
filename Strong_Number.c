#include<stdio.h>
int main()
{
    int n,i,r,temp,prod=1,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        prod=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            prod=prod*i;
        }
        sum=sum+prod;
        n=n/10;
        
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}