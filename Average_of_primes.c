#include<stdio.h>
int main()
{
    int n,a[300],b,i,j,c=0,p=0,k=0;
    double avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            continue;
        }
        c=0;
            for(j=2;j<a[i];j++)
            {
                if(a[i]%j==0)
                {
                    c++;
                }
            }
            if(c==0)
        {
            p=p+a[i];
         //   printf("%d ",p);
            k++;
        }
    }
    avg=p/(float)k;
    printf("%.2lf",avg);
}