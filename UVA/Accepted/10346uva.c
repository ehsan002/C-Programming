#include<stdio.h>
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int ans=n,j=n;
        while(j/k>=1)
        {
            j=j/k;
            ans=ans+j;
            j=j+j%k;
        }
        printf("%d\n",ans);
    }
    return 0;
}
