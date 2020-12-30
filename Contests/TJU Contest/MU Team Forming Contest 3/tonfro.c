#include<stdio.h>
int main()
{
    char s[500],m[500][500];
    int n,i,j,k;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%s",s);
        int len=strlen(s);
        for(i=0,k=0;i<len;k++)
        {
            if(k%2==0)
            {
                for(j=0;j<n;j++,i++)
                    m[k][j]=s[i];
            }

            if(k%2!=0)
            {
                for(j=n-1;j>=0;j--,i++)
                    m[k][j]=s[i];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
                printf("%c",m[j][i]);
        }
        printf("\n");
    }
    return 0;
}
