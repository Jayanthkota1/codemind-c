#include<stdio.h>
int main()
{
    int r,p,a[20][20],b,i,j,c=0;
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
        if(a[i][0]<a[i][1])
        {
        for(j=0;j<p-1;j++)
        {
           if(a[i][j]<a[i][j+1])
           {
               continue;
           }
           else
           {
               b=1;
               break;
           }
        }
        if(b==0)
        {
            c++;
        }
        }
        else
        {
        for(j=0;j<p-1;j++)
        {
           if(a[i][j]>a[i][j+1])
           {
               continue;
           }
           else
           {
               b=1;
               break;
           }
        }
        if(b==0)
        {
            c++;
        }
        }
    }
    printf("%d",c);
}