#include<stdio.h>
int main()
{
    int t,i,r;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&r);
        int l=(r*100)/20;
        int w=(r*60)/20;
        int left=(l*45)/100;
        int right=(l*55)/100;
        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",i+1,left,w/2,right,w/2,right,w/2,left,w/2);
    }

    return 0;
}
