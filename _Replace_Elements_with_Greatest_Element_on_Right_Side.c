#include<stdio.h>
int max(int *a,int k,int n)
{
   int i,max=0;
   for(i=k;i<n;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
   }
   return max;
}
int main()
{
    int i,j,temp,n,a[20],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=max(a,i+1,n);
        a[i]=k;
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("-1");
            break;
        }
        printf("%d ",a[i]);
    }
}