#include<stdio.h>
int main()
{
    long b,s,c=0;
    while(scanf("%ld %ld",&b,&s)==2)
    {
        c++;
        if(s==0&&b==0)
            break;
        if(b==1)
            printf("Case %d: :-\\\n",c);
        else if(s>=b)
            printf("Case %d: :-|\n",c);
        else if(s<b)
            printf("Case %d: :-(\n",c);
    }
    return 0;
}
