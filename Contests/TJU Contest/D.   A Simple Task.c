#include<stdio.h>
int main()
{
    int t,i,n,p,d;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        p=0;
        scanf("%d",&n);
        while(n%2==0)
        {
            n/=2;
            p++;
        }

        d=n;

        printf("%d %d\n",d,p);

    }

    return 0;
}
