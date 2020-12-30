#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s[1000];
        int m;
        scanf("%d %s",&m,s);
        int len=strlen(s);
        int j,k;
        for(j=0,k=0;j<len;j++)
        {
            if(j!=m-1)
            {
                s[k]=s[j];
                k++;
            }
        }
        s[k]='\0';
        printf("%d %s\n",i+1,s);
    }
    return 0;
}
