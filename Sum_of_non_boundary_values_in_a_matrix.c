#include<stdio.h>
int main()
{
    int n,m,a[20][20],c=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || j==0|| i==n-1 || j==m-1)
            {
                continue;
            }
            else
            {
                c=c+a[i][j];
            }
        }
    }
    printf("%d",c);
}