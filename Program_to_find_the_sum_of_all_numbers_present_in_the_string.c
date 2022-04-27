#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,s=0;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s=s+str[i];
            s=s-48;
        }
    }
    printf("%d",s);
}