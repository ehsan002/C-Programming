#include<stdio.h>
#include <string.h>

char s[200][200];
int color[200][200],q[200],front=0,rear=0,i,j;
void enque(int item);
void bfs();
int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n)==2)
    {
        getchar();
        int cnt=0;
        if(m==0&&n==0)
            break;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&s[i][j]);
            }
            getchar();
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(color[i][j]==0&&s[i][j]=='@')
                {
                    bfs();
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
        memset(s,'\0',sizeof(s));
        memset(q,0,sizeof(q));
        memset(color,0,sizeof(color));
        front=0,rear=0;
    }
    return 0;
}

void enque(int item)
{
    q[rear]=item;
    rear++;
}

void bfs()
{
    color[i][j]=1;
    enque(i);
    enque(j);
    while(front!=rear)
    {
        int k;
        int row=q[front];
        front++;
        int col=q[front];
        front++;
        int arr1[8]={-1,0,1,1,1,0,-1,-1};
        int arr2[8]={1,1,1,0,-1,-1,-1,0};
        for(k=0;k<8;k++)
        {
            int x=row+arr1[k],y=col+arr2[k];
            if(s[x][y]=='@'&&color[x][y]==0)
            {
                color[x][y]=1;
                enque(x);
                enque(y);
            }
        }
    }
}
