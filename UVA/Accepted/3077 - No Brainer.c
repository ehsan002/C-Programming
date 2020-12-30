#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
            printf("NO BRAINS\n");
        else
            printf("MMM BRAINS\n");
    }
    return 0;
}
