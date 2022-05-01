#include<stdio.h>
void fun(int i,int p,int k)
{
    int t,d;
    t=i;
    //printf("%d ",t);
    while(i!=0)
       {
           d=i%10;
            p++;
           if(d==0)
           {
               break;
           }
          //printf("%d ",d);
          
           if(t%d==0)
           {
               k++;
           }
           i=i/10;
       }
       if(p==k)
       {
         printf("%d ",t);
       }
       //printf("%d ",t);
}
int main()
{
   int a,b,i,d,t,p=0,k=0;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       p=0;
       k=0;
       fun(i,p,k);
   }
}