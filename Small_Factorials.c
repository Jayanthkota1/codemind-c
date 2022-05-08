#include<stdio.h>
int main()
{
    int t,a,f=1,j,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        f=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }

}