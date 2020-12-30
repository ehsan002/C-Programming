#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10000],matrix[100][100],nes[10000];
    int t=0;
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(s);
        int len=strlen(s);
        int row=sqrt(len);
        for(j=0;j<row;j++)
        {
            for(k=0;k<row;k++)
            {

                matrix[j][k]=s[t];
                nes[t]=matrix[k][j];
                t++;
            }
        }
        for(j=0;j<row;j++)
        {
            for(k=0;k<row;k++)
            {
                printf("%c ",matrix[j][k]);
            }
            printf("\n");
        }
        puts(nes);
    }

}
