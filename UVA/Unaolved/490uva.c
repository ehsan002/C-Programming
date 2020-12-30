#include<stdio.h>
int main()
{
    char m[200][200],n[200][200],s[200];
    int i=0,j,k,max=0;
    while(gets(s))
    {
        int len=strlen(s);
        if(max<len)
            max=len;
        for(j=0;j<len;j++)
        {
            m[i][j]=s[j];
        }
        i++;
    }
    for(j=i-1,k=0;j>=0;j--,k++)
    {
        for(l=0;l++)
        {
            if(m[k][l]=='\0')
                break;
            n[j][l]=m[k][l];
        }
    }

    for(j=0;j<k;j++)
    {
        for(l=0;l++;)
        {
            if(n[j][l]=='\0')
                break;
            printf("%c",)
        }
    }

    return 0;
}
