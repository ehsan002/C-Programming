#include<stdio.h>
#include<string.h>

int u,n,i,cnt,g[20000][20000];

char color[20000];

void dfs();
void dfs_visit(int u);

int main()
{
    int m,a,b,t=0;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(m==0&&n==0)
            break;
        t++;
        cnt=0;
        memset(g,0,sizeof(g));
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&a,&b);
            g[a-1][b-1]=1;
        }

        dfs();
        printf("Case %d: %d\n",t,cnt);
    }

    return 0;
}

void dfs()
{

    memset(color,'w',sizeof(color));

    for(u=0;u<n;u++)
    {
        if(color[u]=='w')
        {
            dfs_visit(u);
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
            if(color[v]=='w')
            {
                dfs_visit(v);
            }
        }
    }
    color[u]=='b';
}
