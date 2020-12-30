#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,a[110];
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int max=a[0],min=a[0],max_pos,min_pos;
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                max_pos=i;
            }
            if(a[i]<=min)
            {
                min=a[i];
                min_pos=i;
            }
        }

        int res;

        if(min_pos>max_pos)
            res = max_pos+n-min_pos-1;
        else
            res = max_pos+n-min_pos-2;

        printf("%d\n",res);

        memset(a,0,sizeof(a));

    }
    return 0;
}
