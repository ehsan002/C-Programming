#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    while(scanf(" %[^\n]",s)==1)
    {
        int len=strlen(s),i;
        for(i=0;i<len;i++)
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
