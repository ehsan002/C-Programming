#include<stdio.h>
#include<string.h>
int main()
{
    char s[16];
    int i,c=0;

    while(scanf("%s",s))
    {
        int len=strlen(s);
        c++;
        printf("%d. ",c);
        for(i=0;i<len;i++)
        {
            if(i==len-1)
                printf("%c\n",s[i]);
            if(i==len-2&&s[i]!='0')
                printf("%c",s[i]);
            if((i==len-3||i==len-10)&&s[i]!='0')
                printf("%c shata ",s[i]);
            if((i==len-4||i==len-11)&&s[i]!='0')
                printf("%c hajar ",s[i]);
            if((i==len-5||i==len-12)&&s[i]!='0')
                printf("%c",s[i]);
            if((i==len-6||i==len-13)&&s[i]!='0')
                printf("%c lakh ",s[i]);
            if((i==len-7||i==len-14)&&s[i]!='0')
                    printf("%c",s[i]);
            if(i==len-8)
                if(s[i]!='0')
                    printf("%c kuti ",s[i]);
                else
                    printf("kuti ",s[i]);
            if(i==len-9&&s[i]!='0')
                printf("%c ",s[i]);
        }
    }
    return 0;
}
