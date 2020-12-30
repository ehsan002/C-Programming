#include<stdio.h>
int main()
{
    long r,n,test=1;
    while(scanf("%d %d",&r,&n)==2)
    {
        if(r==0&&n==0)
            break;
        int d=((r-n)/n)+1;
        if(r==n||r<n)
            printf("Case %ld: 0\n",test);

        else if(d>26)
            printf("Case %ld: impossible\n",test);
        else
            printf("Case %ld: %d\n",test,d);
            test++;
    }
    return 0;
}
