#include<stdio.h>
int main()
{
    int c,r,a[20][20],i,j,e=0,o=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
       {
                e=e+a[i][j];
        }
    }
    printf("%d",e);
}