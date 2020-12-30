#include<stdio.h>
#include<string.h>

char s1[1010],s2[1010];
int i,j,len1,len2,m[1010][1010];

int max(int x,int y)
{
    if(x>y)
        return x;
    else return y;
}

void lcs()
{
    memset(m,0,sizeof(m));
    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                m[i][j]=m[i-1][j-1]+1;
            }

            else
            {
                m[i][j]=max(m[i-1][j],m[i][j-1]);
            }
        }
    }
}

int main()
{
    while(gets(s1))
    {
        gets(s2);
        len1=strlen(s1),len2=strlen(s2);
        lcs();
        printf("%d\n",m[len1][len2]);
    }
    return 0;
}
