/*
6

2
2 4

2
3 5

2
5 6

1
2

1
4

1
6
*/

#include<stdio.h>

int s,u,n,inf=10000,time;
int parent[100],distance[100],f_time[100],cnt=0;
char color[100];

void print_graph(int gr[100][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            printf("%d ",gr[i][j]);
        }
        printf("\n");
    }
}

void print_path(int grp[100][100],int s,int v)
{
    if(v==s)
        printf("%d",s+1);
    else if (parent[v]==-1)
            printf("No Path from %d to %d",s+1,v+1);
    else{
        print_path(grp,s,parent[v]);
        printf("-->%d",v+1);
    }
}

void dfs(int g[100][100]);
void dfs_visit(int g[100][100],int u);

int main()
{
    int t,i,j,k,l,w,n,a,b,g[100][100];
    char ch[1];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        getchar();
        getchar();
        while(gets(ch))
        {
            if(strlen(ch)==0)
                break;
            scanf("%d %d",&a,&b);
            if(ch=='c')
            {
                g[a][b]=1;
            }
            else
                dfs(g);
        }
    }

    return 0;
}

void dfs(int g[100][100])
{
    for(u=0;u<n;u++)
    {
        color[u]='w';
        parent[u]=-1;
    }
    time=0;
    for(u=0;u<n;u++)
    {
        if(color[u]=='w')
        {
            dfs_visit(g,u);
            cnt++;
        }
    }
}

void dfs_visit(int g[100][100],int u)
{
    int v;
    time++;
    distance[u]=time;
    color[u]='g';
    for(v=0;v<n;v++)
    {
        if(g[u][v]==1)
        {
            if(color[v]=='w')
            {
                parent[v]=u;
                dfs_visit(g,v);
            }
        }
    }
    color[u]=='b';
    time++;
    f_time[u]=time;
}
