#include<stdio.h>
#include<string.h>
int main()
{
    char s[1010],s2[1010];
    int c;
    while(scanf("%d",&c)==1)
    {
        scanf("%s",s);
        if(c==0&&s[0]=='0')
            break;
        int i,j,len=strlen(s);
        for(i=0,j=0;i<len;i++,j++)
        {
            if(s[i]==(c+48))
                j--;
            else
                s2[j]=s[i];
        }
        len=strlen(s2);
        for(i=j;i<len;i++)
            s2[i]='\0';
        char s3[1010];
        strcpy(s3,s2);
        len=strlen(s2);
        int t=0;
        for(i=0,j=0;i<len;i++)
        {
            if(s3[i]=='0'&&t==0)
                continue;
            else
            {
                t=1;
                s2[j]=s3[i];
                j++;
            }
        }

        len=strlen(s2);
        for(i=j;i<len;i++)
            s2[i]='\0';

        if(strlen(s2)==0)
            s2[0]='0';

        puts(s2);
        memset(s2,'\0',sizeof(s2));
        memset(s,'\0',sizeof(s));
        memset(s,'\0',sizeof(s3));
    }
    return 0;
}
