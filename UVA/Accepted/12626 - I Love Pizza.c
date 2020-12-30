#include<stdio.h>
#include<string.h>
int main()
{
    char s[610];
    int test,t;
    scanf("%d",&test);
    getchar();
    for(t=0;t<test;t++)
    {

        gets(s);
        int count=0,len = strlen(s),j,m=0,a=0,r=0,g=0,i=0,t=0;
        for(j=0;j<len;j++)
        {
            if(s[j]=='M')
                m++;
            if(s[j]=='A')
                a++;
            if(s[j]=='R')
                r++;
            if(s[j]=='G')
                g++;
            if(s[j]=='I')
                i++;
            if(s[j]=='T')
                t++;
            if(m>=1&&a>=3&&r>=2&&g>=1&&i>=1&&t>=1)
            {
                count++;
                m--;
                a-=3;
                r-=2;
                g--;
                i--;
                t--;
            }

        }

        printf("%d\n",count);
    }

    return 0;
}
