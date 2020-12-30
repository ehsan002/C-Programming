#include<stdio.h>
int main()
{
    char s[15];
    int cnt=0;
    while(scanf("%s",s)==1)
    {
        int len=strlen(s);
        if(s[len-1]=='?')
            continue;
        float r=0,a[4],b[4],c[4],p,n1=0,n2=0;
        int i=0,j;
        while(s[i]!='+'&&s[i]!='-')
        {
            a[i]=s[i]-48;
            i++;
        }
        char op=s[i];
        for(j=i-1,p=0;j>=0;j--,p++)
        {
            n1+=(a[j]*pow(10,p));
            a[j]=0;
        }
        i++;
        int t=i;
        while(s[i]!='=')
        {
            b[i]=s[i]-48;
            i++;
        }


        for(j=i-1,p=0;j>=t;j--,p++)
        {
            n2+=b[j]*pow(10,p);
            b[j]=0;
        }

        i++;
        t=i;
        while(i<len)
        {
            c[i]=s[i]-48;
            i++;
        }

        for(j=i-1,p=0;j>=t;j--,p++)
        {
            r+=c[j]*pow(10,p);
            c[j]=0;
        }
        if(op=='+')
        {
            if((n1+n2)==r)
                cnt++;
        }
        else
            if((n1-n2)==r)
                cnt++;
    }

    printf("%d\n",cnt);
    return 0;
}
