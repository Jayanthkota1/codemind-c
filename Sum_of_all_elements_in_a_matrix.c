#include<stdio.h>
int main()
{
    int n,m,a[20][20],c,i,j;
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
                c=c+a[i][j];
        }
    }
    printf("%d",c);
}