#include<stdio.h>
#include<string.h>

int main()
{
    char s1[14]="HELLO",s2[14]="HOLLA",s3[14]="HALLO",s4[14]="BONJOUR",s5[14]="CIAO",s6[14]="ZDRAVSTVUJTE",s[10];
    int i,c=1;

    while(gets(s))
    {
        int len=strlen(s);
        if(s[0]=='#')
            break;
        if(s[0]==s1[0]&&s[1]==s1[1])
        {
            for(i=0;i<len;i++)
            {
                if(s[i]==s1[i])
                    continue;
            }
            printf("Case %d: ENGLISH\n",c);
        }

        if(s[0]==s2[0]&&s[1]==s2[1])
        {
            for(i=0;i<len;i++)
            {
                if(s[i]==s2[i])
                    continue;
            }
            printf("Case %d: SPANISH\n",c);
        }

        if(s[0]==s3[0]&&s[1]==s3[1])
        {
            for(i=0;i<len;i++)
            {
                if(s[i]==s2[i])
                    continue;
            }
            printf("Case %d: GERMAN\n",c);
        }

        if(s[0]==s4[0]&&s[1]==s4[1])
        {
            for(i=0;i<len;i++)
            {
                if(s[i]==s2[i])
                    continue;
            }
            printf("Case %d: FRENCH\n",c);
        }

        if(s[0]==s5[0]&&s[1]==s5[1])
        {
            for(i=0;i<len;i++)
            {
                if(s[i]==s2[i])
                    continue;
            }
            printf("Case %d: ITALIAN\n",c);
        }

        if(s[0]==s6[0]&&s[1]==s6[1])
        {
            for(i=0;i<len;i++)
            {
                if(s[i]==s2[i])
                    continue;
            }
            printf("Case %d: RUSSIAN\n",c);
        }

        if((s[0]!=s6[0]&&s[1]==s6[1])&&(s[0]==s5[0]&&s[1]==s5[1])&&(s[0]==s4[0]&&s[1]==s4[1])&&(s[0]==s3[0]&&s[1]==s3[1])&&(s[0]==s2[0]&&s[1]==s2[1])&&(s[0]==s1[0]&&s[1]==s1[1]))
            printf("UNKNOWN\n");

        c++;
    }
    return 0;
}
