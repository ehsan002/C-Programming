#include<stdio.h>
int main()
{
    int t,n,k,p,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        int x=k,j;
        for(j=0;j<p;j++)
        {
            x++;
            if(x==n+1)
                x=1;
        }
        printf("Case %d: %d\n",i+1,x);
    }
    return 0;
}
