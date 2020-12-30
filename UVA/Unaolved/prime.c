#include<stdio.h>

int prime(int n)
{
    int i;
    if(n==0||n==1)
        return 0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i,j,a[100];
    for(i=2,j=0;i<100;i++)
    {
        int t=prime(i);
        if(t==1){
            a[j]=i;
            j++;
        }
    }
    for(i=0,j=0;i<100;i++)
        printf("%d ",a[j]);
    /*while(scanf("%d",&n)==1)
    {
        for(i=2;i<=n;i++)
        {

                printf("%d ",i);
        }
        printf("\n");
    }*/
    return 0;
}
