#include<stdio.h>
int main()
{
    int n,speed,time[15],i;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
            break;
            time[0]=0;
            int distance=0;
            for(i=0;i<n;i++)
            {
                scanf("%d %d",&speed,&time[i+1]);
                distance+=(speed*(time[i+1]-time[i]));
            }
            printf("%d miles\n",distance);
    }

    return 0;
}
