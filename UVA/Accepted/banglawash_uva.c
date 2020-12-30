#include<stdio.h>
int main()
{
    int t,i,n,a,b,w,j,tie;
    char s[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        a=0,b=0,w=0,tie=0;
        scanf("%d",&n);
        getchar();
        for(j=0;j<n;j++)
        {
            scanf("%c",&s[j]);
            if(s[j]=='B')
                b++;
            if(s[j]=='W')
                w++;
            if(s[j]=='A')
                a++;
            if(s[j]=='T')
                tie++;
        }
        if(a==n)
        {
            printf("Case %d: ABANDONED\n",i+1);
            continue;
        }

        if(w>0&&b==0&&tie==0)
        {
            printf("Case %d: WHITEWASH\n",i+1);
            continue;
        }

        if(b>0&&w==0&&tie==0)
        {
            printf("Case %d: BANGLAWASH\n",i+1);
            continue;
        }

        if(b==w)
        {
            printf("Case %d: DRAW %d %d\n",i+1,b,tie);
            continue;
        }

        if(b>w)
        {
            printf("Case %d: BANGLADESH %d - %d\n",i+1,b,w);
            continue;
        }

        if(w>b)
        {
            printf("Case %d: WWW %d - %d\n",i+1,w,b);
            continue;
        }

    }

    return 0;
}
