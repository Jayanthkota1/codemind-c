#include<stdio.h>
int main()
{
    int r,p,a[20][20],b,i,j,max=0;
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
           b=b+a[i][j];
        }
        if(max<b)
        {
            max=b;
        }
    }
    printf("%d",max);
    
}