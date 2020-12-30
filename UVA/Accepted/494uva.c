#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    while(gets(s))
    {
        int len=strlen(s),k=0;
        int i;
        for(i=0;i<len;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                while((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                {
                    i++;
                }
                k++;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
