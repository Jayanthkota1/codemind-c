#include<stdio.h>
int main()
{
    char s[100];
    int i,t,j,k,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    for(i=c-1;i>-1;i--)
    {
        printf("%c",s[i]);
    }
}