#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,a=0,b=0,k;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='z')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    k=2*a;
    if(b==k)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}