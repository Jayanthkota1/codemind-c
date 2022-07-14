#include<stdio.h>
int prime(int n)
{
    int i,k=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k=1;
            return 0;
        }
    }
    if(k==0)
    {
        return 1;
    }
    return 1;
}       
int main()
{
  int a,b,x,f,i;
  scanf("%d%d",&a,&b);
  x=a+b;
  for(i=1;i<10;i++)
    {
        f=i+x;
    if(prime(f)==1)
    {
        printf("%d",i);
        break;
    }
}
}