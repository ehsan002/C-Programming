#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    long n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        int len=strlen(s),j,sum=0;
        for(j=0;j<len;j++)
        {
            sum+=s[j]-48;
            s[j]='\0';
        }
        printf("%d\n",sum);
    }
    return 0;
}
