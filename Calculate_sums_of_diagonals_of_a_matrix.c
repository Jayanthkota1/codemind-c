#include<stdio.h>
int main()
{
    int n,i,j,pri=0,sec=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                pri=pri+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                sec=sec+arr[i][j];
            }
        }
    }
    
    printf("Principal Diagonal:%d
",pri);
    printf("Secondary Diagonal:%d
",sec);
}