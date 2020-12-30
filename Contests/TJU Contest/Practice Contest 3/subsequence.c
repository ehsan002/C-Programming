#include<stdio.h>
#include<string.h>
int main()
{
    long n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        char s1[1000],s2[1000];
        scanf("%s %s",s1,s2);
        int len1=strlen(s1),len2=strlen(s2);
        int j,k,a[1000],l=0,t=0,b[1000],m,s[1000];

        for(j=0,k=len1-1;j<len1;j++,k--)
        {
            s[j]=s1[k];
        }
        s[j]='\0';

        for(j=0;j<len2;j++)
        {
            for(k=0;k<len1;k++)
            {
                if(s2[j]==s1[k])
                {
                    a[l]=k;
                    s1[k]='\0';
                    l++;
                    break;
                }
            }
        }
        a[l]='\0';

        m=0;
        for(j=0;j<len2;j++)
        {
            for(k=0;k<len1;k++)
            {
                if(s2[j]==s[k])
                {
                    b[m]=k;
                    s[k]='\0';
                    m++;
                    break;
                }
            }
        }

        if(a[0]<=a[1]){
            for(j=0;j<m-1;j++)
            {
                if(a[j]<=a[j+1])
                    t=1;
                else
                {
                    t=0;
                    break;
                }
            }
        }
        int tmp=0;
        if(b[0]<=b[1])
        {
            for(j=0;j<m-1;j++)
            {
                if(b[j]<=b[j+1])
                    tmp=3;
                else
                {
                    tmp=0;
                    break;
                }
            }
        }
        if(t==0&&tmp==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
