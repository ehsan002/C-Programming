#include<stdio.h>
int main()
{
    int t,i,j,n,p[30],d;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        d=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&p[j]);
            d+=p[j];
        }
        int flag = 1;
        for(j=0;j<n;j++)
        {
            if(p[j]>(d/4))
            {
                flag=0;
                break;
            }
        }

        if(d%4==0&&flag==1)
            printf("yes\n");
        else
            printf("no\n");

    }

    return 0;
}
