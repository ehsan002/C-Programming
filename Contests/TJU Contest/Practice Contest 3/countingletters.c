#include<stdio.h>
#include<string.h>
int main()
{
    long n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        char s[1000],s2[1000];
        scanf("%s",s);
        int len=strlen(s);
        int j,k,l,a[1000];
        for(j=0,l=0;j<len;j++)
        {
            if(s[j]=='\0')
                continue;
            int t=1;
            for(k=1;k<len;k++)
            {
                if(s[j]==s[k])
                {
                    t++;
                    s[k]='\0';
                }
            }
            a[l]=t;
            s2[l]=s[j];
            l++;
            s[j]='\0';
        }
        s2[l]='\0';
        for(j=0;j<len;j++)
        {
            printf("%d %c",a[j],s2[j]);
        }
    }
    return 0;
}
