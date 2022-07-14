#include<stdio.h>
int main()
{
    int r,p,a[20][20],b,i,j,e=0,o=0;
    scanf("%d%d",&r,&p);
    for(i=0;i<r;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
       b=0;
        for(j=0;j<p;j++)
        {
        if(a[i][j]%2==0)
        {
            e=e+a[i][j];
        }
        else
        {
            o=o+a[i][j];
        }
        }
    }
    printf("%d %d",e,o);
    
}