#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char s[40],s1[40];
    while(scanf("%d",&n)==1)
    {
        scanf("%s",s);
        int len=strlen(s),j;
        for(j=0,c=0,k=0;j<len;j++)
        {
            for(l=0;l<k;l++)
            {
                if(s[j]==s1[l])
                    t=1;
            }

            if(t==0)
            {
                for(l=j+1;l<len;l++)
                {
                    if(s[j]==s[l])
                    {
                        cnt[c]++;
                    }
                }
                c++;
            }

        }
    }
    return 0;
}
