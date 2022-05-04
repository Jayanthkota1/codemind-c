#include<stdio.h>
void fun(int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(n==i*i)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}