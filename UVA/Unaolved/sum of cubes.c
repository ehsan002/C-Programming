#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
          sum+=pow(i,3);
        printf("%d\n",sum);
    }
    return 0;
}
