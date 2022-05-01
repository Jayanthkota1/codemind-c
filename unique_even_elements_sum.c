#include<stdio.h>
int main()
 {
     int n,a[20],i,j,s=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
        
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(a[i]==a[j])
             {  
                 a[i]=-1;
             }
         }
     }
     for(i=0;i<n;i++)
     {
         if(a[i]==-1)
         {
             continue;
         }
         else
         {
             if(a[i]%2==0)
             {
                 s=s+a[i];
             }
         }
     }
     printf("%d",s);
 }