#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(i==j || j==1)
            {
                printf("*");
            }
            else if(i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}