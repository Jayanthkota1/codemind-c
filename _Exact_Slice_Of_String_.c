#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,a,b;
    scanf("%[^
]s",str);
    scanf("%d%d",&a,&b);
    len=strlen(str);
    for(i=a;i<=b;i++)
    {
        printf("%c",str[i]);
    }
}