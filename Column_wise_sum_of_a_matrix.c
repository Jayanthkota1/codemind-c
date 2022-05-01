#include<stdio.h>
int main()
{
    int r,p,a[20][20],b,i,j;
    scanf("%d%d",&r,&p);
    for(i=0;i<r;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<p;j++)
    {
       b=0;
        for(i=0;i<r;i++)
        {
           b=b+a[i][j];
        }
        printf("%d ",b);
    }
    
    
}