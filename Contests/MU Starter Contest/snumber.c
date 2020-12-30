#include <stdio.h>
int main()
{
    int a[100],i,n,max,max2;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        max=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i])
                max=a[i];
        }
        max2=-100;
        for(i=0;i<n;i++){
            if((a[i]>max2)&&(a[i]<max))
                max2=a[i];
        }
        printf("%d\n",max2);
    }
    return 0;
}
