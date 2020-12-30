#include<stdio.h>
int main()
{
    int n,a[1010],i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
            {
                i--;
                n--;
            }
        }

        if(a[0]==0)
        {
            printf("0\n");
            continue;
        }

        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
            if(i<n-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
