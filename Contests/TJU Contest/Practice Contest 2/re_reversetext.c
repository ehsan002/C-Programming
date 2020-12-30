#include<stdio.h>
#include<string.h>
char s[1000],s2[1000];
int main()
{
    int i,j;
    long n,k;
    scanf("%ld",&n);
    for(k=0;k<n;k++)
    {
        scanf(" %[^\n]",s);
        int len=strlen(s);
        for(i=0,j=len-1;i<len;i++,j--)
        {
            s2[j]=s[i];
            s[i]='\0';
        }
        puts(s2);
        for(i=0;i<len;i++)
            s2[i]='\0';
    }
    return 0;
}
