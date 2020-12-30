#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,ans,ans1,ans2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0&&h2==0&&m1==0&&m2==0)
            break;
        if(h1==0)
            h1=24;
        if(h2==0)
            h2=24;
        ans1=(h1*60)+m1;
        ans2=(h2*60)+m2;
        ans=ans2-ans1;
        if(ans<0)
            ans=(24*60)+ans;
        printf("%d\n",ans);
    }
    return 0;
}
