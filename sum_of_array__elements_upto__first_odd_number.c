#include<stdio.h>
int main()
{
 int n,a[200],i,ind,s=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            ind=i;
            break;
        }
    }
 for(i=0;i<ind;i++)
 {
     s=s+a[i];
 }
 printf("%d",s);
}