#include<stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    long i;
    for(i=0;i<t;i++)
    {
        char s[1000];
        int n,j,k;
        scanf("%s %d",s,&n);
        int len=strlen(s);
        char s1[]=" abcdefghijklmnopqrstuvwxyz";
        for(j=0;j<len;j++)
        {
            for(k=1;k<27;k++)
            {
                if(s[j]==s1[k])
                {
                    if(k+n>26)
                    {
                        s[j]=s1[k+n-26];
                    }
                    else
                        s[j]=s1[k+n];
                    break;
                }
            }
        }
        puts(s);
    }
    return 0;
}
