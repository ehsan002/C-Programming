#include<stdio.h>
#include<string.h>
int main()
{
    char s[5000],s1[50000];
    int n;
    while(scanf("%s",s)==1)
    {
        int len=strlen(s);
        if(len==1)
            break;
        scanf("%d",&n);
        int i,j=0,k;
        for(i=0;i<n;i++)
        {
            for(j=j,k=0;k<len;j++)
            {
                s1[j]=s[k];
                k++;
            }
        }
        s1[j]='\0';
        char temp[5000],s2[50000];
        int len2=strlen(s1);
        for(i=0;i<len;i++)
        {
            for(j=0;j<i;j++)
            {
                temp[j]=s[j];
            }
            for(j=i;j<len2;j++)
            {
                s2[j-i]=s1[j];
            }
            for(j=len2-i,k=0;j<len2;j++,k++)
                s2[j]=temp[k];
            s2[j]='\0';
            puts(s2);
        }
    }
    return 0;
}
