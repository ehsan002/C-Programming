#include<stdio.h>
int main()
{
    int n,a[10002],i,j,k=2,temp=2,c=0;
    a[0]=0,a[1]=1;
    for(i=2;i<10002;i++)
    {
        if(i<=2*temp)
        {
            a[i]=k;
        }
        else
        {
            k++;
            temp*=2;
            i--;
        }
    }
    while(scanf("%d",&n)==1)
    {
        c++;
        if(n<0)
            break;
        printf("Case %d: %d\n",c,a[n]);
    }
    return 0;
}
