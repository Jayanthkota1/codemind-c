#include<stdio.h>
int main()
{
    long int a,b,c=0,num=0,rev=0,d;
    scanf("%ld",&a);
   
    while(a!=0)
    {
        d=a%10;
        c++;
        rev=rev*10+d;
        a=a/10;
    }
    //printf("%ld",rev);
     d=rev%10;
    if(d==0)
    {
        printf("Invalid");
    }
    else if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}