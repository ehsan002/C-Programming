#include <stdio.h>
int main()
{
    int i,j,n,s1,s2,s;
    while(scanf("%d",&n)==1)
    {
        s=0,s1=0,s2=0;
        for(i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                j=i*i;
                s1=s1+i*i;
            }
            if(i%2!=0)
            {
                j=i*i;
                s2=s2+j;
            }
        }
        s=s2-s1;
        printf("%d",s);
        printf("\n");
    }
    return 0;
}
