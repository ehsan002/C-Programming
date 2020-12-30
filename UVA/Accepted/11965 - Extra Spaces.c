#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n,j;
    char s[510];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        getchar();

        printf("Case %d:\n",i+1);
        for(j=0;j<n;j++)
        {

            gets(s);
            int k,len=strlen(s),l;
            for(k=0,l=0;k<len;)
            {

                if(s[k]==' ')
                {
                        s[l]=s[k];
                        l++;
                        while(s[k]==' ')
                        {
                            k++;
                        }

                }
                else
                    {
                        s[l]=s[k];
                        l++;
                        k++;
                    }

            }
            for(k=l;k<len;k++)
                s[k]='\0';

            puts(s);
        }

        if(i<t-1)
            printf("\n");
    }
    return 0;
}
