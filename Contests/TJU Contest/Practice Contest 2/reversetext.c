#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    long n,k;
    scanf("%ld",&n);
    for(k=0;k<n;k++)
    {
        scanf(" %[^\n]",s);
        int len=strlen(s),i,j;
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
        for(i=0;i<len;i++){
            printf("%c",s[i]);
            s[i]='\0';
        }
        printf("\n");
    }
    return 0;
}
