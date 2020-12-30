#include<stdio.h>
#include<string.h>
int main()
{
    char s[110],s1[110];
    int n,i,j;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;
        scanf("%s",s);

        int len=strlen(s);
        n=len/n;

        for(i=0;i<=len-n;)
        {
            int j=i+n-1,temp=i;
            while(j>=temp)
            {
                s1[i]=s[j];
                i++;
                j--;
            }
        }
        int len2=strlen(s1);
        for(i=len;i<len2;i++)
            s1[i]='\0';
        puts(s1);
        memset(s,'\0',sizeof(s));
        memset(s1,'\0',sizeof(s1));
    }

    return 0;
}
