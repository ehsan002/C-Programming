#include<stdio.h>
int main()
{
    char s[200][200],c;
    int i=0,t=0,j;
    while(i>=0)
    {
        j=0;
        while(scanf("%c",&c)==1)
        {
            if(c=='0')
            {
                t=1;
                break;
            }
            if(c=='\n')
            {
                i++;
                break;
            }

            s[i][j]=c;
            j++;
        }
        if(t==1)
            break;
    }
    printf("%d %d",i,j);
    return 0;
}
