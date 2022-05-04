#include<stdio.h>
void fun(int n)
{
    static int i=1;
        if(i>n)
        {
            return;
        }
        printf("%d ",i);
        i++;
        fun(n);
}
int main()
{
    int n,i=1,k;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
       fun(n);
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}