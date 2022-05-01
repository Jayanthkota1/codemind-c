#include<stdio.h>
int main()
 {
     int n,a[20],i,j,k=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     k=n-1;
        if(n%2==0)
        {
            for(i=0;i<=n/2;i++)
            {
              for(j=k;j>=(n/2);j--)
               {
                   printf("%d %d ",a[i],a[j]);
                   break;
               }
               k--;
            }
           
        }
        else
        {
              {
            for(i=0;i<=n/2;i++)
            {
              for(j=k;j>=(n/2)+1;j--)
               {
                   printf("%d %d ",a[i],a[j]);
                   break;
               }
               k--;
            }
             printf("%d %d",a[n/2],0);
        }
        }
 }