#include<stdio.h>
#include<string.h>
int main()
{
    char s[260];
    int i,j;
    while(gets(s))
    {
        int sum=0;
        if(s[0]=='#')
        {
            break;
        }

        int len=strlen(s);

        for(i=0;i<len;i++)
        {
            if(s[i]==' ')
                continue;
            sum+=((i+1)*(s[i]-64));
        }

        printf("%d\n",sum);
    }
    return 0;
}
