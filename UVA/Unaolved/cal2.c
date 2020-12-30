#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char str[120];

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        int cnt=0,j;
        gets(str);
        int len=strlen(str);
        for(j=0;j<len;j++)
        {
            if(str[j]==' ')
                cnt++;
            else
                cnt+=a[str[j]-'a'];
        }

        printf("Case #%d: %d\n",i+1,cnt);

    }

    return 0;
}
