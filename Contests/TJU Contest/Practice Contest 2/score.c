#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        int len=strlen(s),j,sum=0,k=0;
        for(j=0;j<len;j++)
        {
            if(s[j]=='X')
                k=0;
            else
                k++;
            sum+=k;
        }
        printf("%d\n",sum);
    }
    return 0;
}
