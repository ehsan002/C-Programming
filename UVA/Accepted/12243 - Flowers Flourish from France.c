#include<stdio.h>
#include<string.h>
int main()
{
    char s[1100];
    while(gets(s))
    {
        int len=strlen(s),i,temp=0,t=0;
        if(s[0]=='*')
            break;
        for(i=1;i<len;i++)
        {
            if(s[i]==' ')
            {
                t=1;
                if((s[i+1]!=s[0])&&(s[i+1]!=(s[0]-32))&&(s[i+1]!=(s[0]+32)))
                {
                    temp=1;
                    break;
                }
            }
        }

        if(t==0)
            printf("Y\n");

        else if(temp==1)
            printf("N\n");

        else
            printf("Y\n");

    }
    return 0;
}
