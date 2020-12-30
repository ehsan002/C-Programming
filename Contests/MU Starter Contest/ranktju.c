#include<stdio.h>
int main()
{
    int a[10000],k,n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        k=1;
        for(i=1;i<n;i++)
            if(a[i]>a[0])
                k++;
        printf("%d\n",k);
    }
    return 0;
}
