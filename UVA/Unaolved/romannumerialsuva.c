#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    while(gets(s))
    {
        int len=strlen(s),sum=0,i;
        for(i=len-1;i>=0;i--)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V'||s[i+1]=='X')
                    sum--;
                else
                    sum++;
            }
            if(s[i]=='X')
            {
                if(s[i+1]=='L'||s[i+1]=='C')
                    sum-=10;
                else
                    sum+=10;
            }
            if(s[i]=='V')
                sum+=5;
            if(s[i]=='L')
                sum+=50;
            if(s[i]=='D')
                sum+=500;
            if(s[i]=='C')
            {
                if(s[i+1]=='D'||s[i+1]=='M')
                    sum-=100;
                else
                    sum+=100;
            }
            if(s[i]=='M')
                sum+=1000;
        }
        printf("%d\n",sum);
    }
    return 0;
}
