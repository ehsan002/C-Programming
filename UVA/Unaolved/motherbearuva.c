#include<stdio.h>
#include<string.h>
char s[50000];
int main()
{
    while(gets(s))
    {
        if(strcmp(s,"DONE")==0)
            break;

        long len=strlen(s),i,j;
        if(len==0){
            printf("You won't be eaten!\n");
            continue;
        }

        if(len==1)
        {
            printf("You won't be eaten!\n");
            continue;
        }

        for(i=0,j=0;i<len;i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                s[j]=s[i];
                if(s[j]>='A'&&s[j]<='Z')
                        s[j]=s[j]+32;
                j++;
            }
        }
        s[j]='\0';
        len=strlen(s);
        if(len==0)
        {
            printf("You won't be eaten!\n");
            continue;
        }
        int t=0;
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(s[i]==s[j])
                t=1;
            else
            {
                t=0;
                break;
            }
        }
        if(t==0)
            printf("Uh oh..\n");
        else
            printf("You won't be eaten!\n");
        memset(s,'\0',sizeof(s));
    }
    return 0;
}
