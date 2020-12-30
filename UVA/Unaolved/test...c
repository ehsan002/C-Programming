#include<stdio.h>
int main()
{
    char s[21];
    int ,j
    while(gets(s))
    {
        int len = strlen(s);
        int t=0;
        for(i=0,j=len;i<len/2;i++,j--)
        {
            if(s[i]=='E')
                if(s[j]=='3')
                    t=1;

            else if(s[i]=='3')
                if(s[j]=='E')
                    t=1;

            else if(s[i]=='J')
                if(s[j]=='L')
                    t=1;
            else if(s[i]=='L')
                if(s[j]=='J')
                    t=1;
            else if(s[i]=='S')
                if(s[j]=='2')
                    t=1;
            else if(s[i]=='2')
                if(s[j]=='S')
                    t=1;
            else if(s[i]=='Z')
                if(s[j]=='5')
                    t=1;
            else if(s[i]=='5')
                if(s[j]=='Z')
                    t=1;
            else if(s[i]==s[j])
                temp=1;
            else if(s[i]=='O'||s[i]=='0')
                if(s[j]=='0'||s[j]=='O')
                    t=1;
            else
                t=0;
        }
        if(t==1)
            printf("%s -- is not a palindrome.\n",s);
        else
            printf("%s -- is not a palindrome.\n",s);
    }
}
