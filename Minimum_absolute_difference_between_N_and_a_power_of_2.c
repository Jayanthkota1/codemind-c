#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,min=0,max=0,p;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n>=pow(2,i))
        {
            min=i;
        }
        if(n<pow(2,i))
        {
            max=i;
            break;
        }
    }
    if(n-pow(2,min)<=(pow(2,max)-n))
    {
        p=n-pow(2,min);
        printf("%d",p);
    }
    else
    {
        p=pow(2,max)-n;
        printf("%d",p);
    }
}