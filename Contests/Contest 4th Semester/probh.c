#include <stdio.h>
int main()
{
    int i,n,j,s=0;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            s+=j;
            printf("%d",s);
            printf("\n");
        }
    }
    return 0;
}
