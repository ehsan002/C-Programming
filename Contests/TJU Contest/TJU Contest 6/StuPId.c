#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        int len = strlen(s),cnt=0,sum=0,c,c1;
        for(j=len-1;j>=0;j--)
        {
            if(cnt==0)
            {
                if(s[j]=='?')
                    c=j,c1=cnt;
                else
                    sum+=((s[j]-48)*9);
                cnt++;
                continue;
            }
            if(cnt==1)
            {
                if(s[j]=='?')
                    c=j,c1=cnt;
                else
                    sum+=((s[j]-48)*3);
                cnt++;
                continue;
            }
            else
            {
                if(s[j]=='?')
                    c=j,c1=cnt;
                else
                    sum+=((s[j]-48)*7);
                cnt=0;
            }

        }

        if(sum%10==0)
        {
            s[c]='0';
        }
        else
        {
            if(c1==0)
                cnt=9;
            else if(c1==1)
                cnt=3;
            else if(c1==2)
                cnt=7;
            for(j=1;j<10;j++)
            {
                int temp=sum+(j*cnt);
                if(temp%10==0)
                {
                    s[c]=j+48;
                    break;
                }
            }
        }
        printf("Scenario #%d:\n",i);
        for(j=0;j<len;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n\n");
    }
    return 0;
}
