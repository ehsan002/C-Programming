#include<stdio.h>
int main()
{
    int n,e,f,c,i,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&e,&f,&c);
        int d=0;
        int t=e+f;
        while(t>=c)
        {
            ans=t/c;
            d=d+ans;
            ans=ans+t%c;
            t=ans;
        }
        printf("%d\n",d);
    }
    return 0;
}
