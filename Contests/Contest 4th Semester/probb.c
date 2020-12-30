#include <stdio.h>
int main()
{
    char c,s[200];
    int i,j;
    while(gets(s)&&scanf("%c",&c)==1)
    {
        int len=strlen(s);
        if(c=='V'){
            for(i=0;i<len;i++)
            {
                if(i==len-1)
                    printf("%c",s[len-1]);
                else
                    printf("%c\n",s[i]);
            }
        }
        if(c=='A')
        {
            for(i=0;i<len;i++)
            {
                for(j=0;j<i;j++)
                    printf(" ");
                printf("%c",s[i]);
                if(i!=len-1)
                    printf("\n");
            }
        }
        if(c=='D')
        {
            for(j=0;j<len;j++)
            {
                for(i=len;i>j;i--)
                    printf(" ");
                printf("%c",s[j]);
                if(j!=len-1)
                    printf("\n");
            }
        }
    printf("\n");
    }
    return 0;
}
