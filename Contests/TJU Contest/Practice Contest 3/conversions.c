#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char s[10];
        double n;
        scanf("%lf %s",&n,s);
        double rslt=0;

        if(s[0]=='k')
        {
            rslt=n*2.2046;
            printf("%d %.4lf lb\n",i+1,rslt);
            continue;
        }

        if(s[1]=='b')
        {
            rslt=n*0.4536;
            printf("%d %.4lf kg\n",i+1,rslt);
            continue;
        }

        if(s[0]=='l')
        {
            rslt=n*0.2642;
            printf("%d %.4lf g\n",i+1,rslt);
            continue;
        }

        if(s[0]=='g')
        {
            rslt=n*3.7854;
            printf("%d %.4lf l\n",i+1,rslt);
            continue;
        }

    }
    return 0;
}
