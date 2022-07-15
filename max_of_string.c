#include<stdio.h>
int main()
{
    char s[100],c;
    int i,max=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
        }
    }
    printf("%c",max);
}