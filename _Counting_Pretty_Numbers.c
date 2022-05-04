#include<stdio.h>
int main()
{
    int t,a,b,c,i,j,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            d=j%10;
            if(d==2 || d==9 || d==3)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}