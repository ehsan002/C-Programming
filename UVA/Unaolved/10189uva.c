#include<stdio.h>
#include<string.h>
char s[200][200],out[200][200];

void inc(int a,int b)
{
    int arr1[8]={-1,0,1,1,1,0,-1,-1},k;
    int arr2[8]={1,1,1,0,-1,-1,-1,0};
    for(k=0;k<8;k++)
    {
        int x=a+arr1[k],y=b+arr2[k];
        out[x][y]++;
    }
}

int main()
{

    int m,n,i,j;
    while(scanf("%d %d",&m,&n)==2)
    {
        memset(s,'\0',sizeof(s));
        memset(out,'0',sizeof(out));
        if(m==0&&n==0)
            break;
        getchar();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&s[i][j]);
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s[i][j]=='*')
                {
                    out[i][j]='*';
                    inc(i,j);
                }
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",out[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
