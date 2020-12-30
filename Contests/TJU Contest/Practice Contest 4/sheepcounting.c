#include<stdio.h>
int compare(char s1[],char s2[])
{
    int len1=strlen(s1),i,t=0;
    if(len1!=5)
        return 0;
    for(i=0;i<len1;i++)
    {
        if(s1[i]==s2[i])
        {
            t=1;
        }
        else
        {
            t=0;
            break;
        }
    }
    if(t==1)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,j,total=0;;
        char s[100];
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%s",s);
            if(compare(s,"sheep")==1)
            {
                total++;
            }
            int len=strlen(s),k;
            for(k=0;k<len;k++)
            {
                s[k]='\0';
            }
        }
        printf("Case %d: This list contains %d sheep.\n",i+1,total);
        if(i<n-1)
            printf("\n");
    }
    return 0;
}
