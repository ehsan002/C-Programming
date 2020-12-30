#include<stdio.h>
int main()
{
    int n,a,j,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        k=1;
        for(j=0;j<a;j++)
        {
            if(j%3==0)
            {
                if(j%2==0)
                    k++;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
