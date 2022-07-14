#include<stdio.h>
int main()
{
    int n,m,a[20][20],c,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0|| i==m-1 || j== m-1)
            {
                c=c+a[i][j];
            }
        }
    }
    printf("%d",c);
}