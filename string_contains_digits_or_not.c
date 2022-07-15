#include<stdio.h>
int main()
{
    char s[100];
    int i,t,j,k,m=0;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    scanf("%s",s);
    m=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            m=1;
        }
    }
    if(m==0)
    {
        printf("No
");
    }
    else
    {
        printf("Yes
");
    }
    }
}