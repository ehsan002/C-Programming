#include<stdio.h>
int main()
{
    int t,n,i,j,k;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        getchar();
        k=0;
        char s[110];
        for(j=0;j<n;j++)
        {
            scanf("%c",&s[j]);
        }

        int temp=j;
        for(j=0;j<n;j++)
        {
            if(s[j]=='.')
            {
                k++;
                j+=2;
            }
        }
        printf("Case %d: %d\n",i+1,k);
        memset(s,'\0',sizeof(s));
    }
    return 0;
}
