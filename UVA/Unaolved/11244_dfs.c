#include<stdio.h>
#include<string.h>

int u,n,i,j,flag,cnt,g[20000][20000];

char color[20000];

void dfs();
void dfs_visit(int u);

int main()
{
    int m;
    char s[200][200];
    while(scanf("%d %d",&n,&m)==2)
    {
        getchar();
        int cnt=0;
        if(m==0||n==0)
            break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%c",&s[i][j]);
                if(s[i][j]=='*')
                    g[i][j]=1;
                else
                    g[i][j]=0;
            }
            getchar();
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                printf("%d ",g[i][j]);
            printf("\n");
        }
        dfs();
        printf("%d\n",cnt);

    }
    return 0;
}

void dfs()
{

    memset(color,'w',sizeof(color));

    for(u=0;u<n;u++)
    {
        flag=0;
        if(color[u]=='w')
        {
            dfs_visit(u);
            if(flag==1)
                cnt++;
        }
    }
}

void dfs_visit(int u)
{
    int v;
    color[u]='g';
    for(v=0;v<n;v++)
    {
        if(g[u][v]==1)
        {
            printf("Hello\n\n");
            flag=1;
            if(color[v]=='w')
            {
                dfs_visit(v);
            }
        }
    }
    color[u]=='b';
}

