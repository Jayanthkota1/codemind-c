#include<stdio.h>
int main()
{
    int a,b,c=0,num=0,rev=0,d,sq,sq1;
    scanf("%d",&a);
    sq=a*a;
    while(a!=0)
    {
        d=a%10;
        rev=rev*10+d;
        a=a/10;
    }
    sq1=rev*rev;
    while(sq1!=0)
    {
        d=sq1%10;
        num=num*10+d;
        sq1=sq1/10;
    }
    if(sq==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}