#include<stdio.h>
int main()
{
    char s[100][100];
    int color[100][100];
    int i,j,n,t,k,temp=0,row,col,r,c,l,p,cnt;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        temp=0;
        getchar();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%c",&s[i][j]);
            getchar();
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s[i][j]=='#'&&color[i][j]==0)
                {
                    color[i][j]=1;
                    row=i,col=j;
                    for(l=col,cnt=0;l<n;l++,cnt++)
                    {
                        if(s[row][l]!='#')
                            break;
                        else
                            color[row][l]=1;
                    }
                    for(r=row+1,p=0;r<n&&p<cnt-1;r++,p++)
                    {
                        for(c=col;c<l;c++)
                        {
                            if(s[r][c]!='#')
                            {
                                temp=1;
                                break;
                            }
                            else
                                color[r][c]==1;
                        }
                    }
                }
                if(temp==1)
                    break;
            }
            if(temp==1)
                    break;
        }
        if(temp==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
