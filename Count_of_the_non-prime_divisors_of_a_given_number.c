#include<stdio.h>
int main()
{
   int n,i,c=0,j,k=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       c=0;
       if(n%i==0)
       {
           for(j=2;j<n;j++)
           {
               if(i%j==0)
               {
                   c++;
               }
           }
       }
       if(c>1)
       {
           k++;
       }
   }
   printf("%d",k);
}