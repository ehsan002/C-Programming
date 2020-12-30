#include<stdio.h>
int main()
{
    int n,a[18],i,k=0,b[2],c=0;
    while(scanf("%d",&n)==1)
    {
        c++;
        long long product=1;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
                product*=a[i];
            else if(a[i]<0)
            {
                b[k]=a[i];
                k++;
                if(k==2)
                {
                    product=product*b[0]*b[1];
                    k=0;
                }
            }
        }
        printf("Case #%d: The maximum product is %lld.",c,product);
    }
    return 0;
}
