#include<stdio.h>
int main()
{
    int n,p=0,a[3000],c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=0;
      if(a[i]==-1)
      {
          continue;
      }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                p=1;
                a[j]=-1;
            }
        }
        if(p==1)
        {
            a[i]=-1;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            continue;
        }
        if(a[i]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}