#include<stdio.h>
int main()
{
    int i,n,c=0,a[100];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        c++;
        int sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int avg=sum/n;
        int move=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            {
                move+=(a[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",c,move);
    }
    return 0;
}
