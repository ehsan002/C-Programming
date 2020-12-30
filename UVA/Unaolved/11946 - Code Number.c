#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[]="OIZEASGTBP";
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        getchar();
        while(gets(s))
        {
            if((s[0]=='\0'))
                break;
            int len=strlen(s);
            for(j=0;j<len;j++)
            {
                if(s[j]>='0'&&s[j]<='9')
                {
                    s[j]=s1[s[j]-48];
                }
            }
            puts(s);
        }
        if(i<n-1)
            printf("\n");
    }
    return 0;
}
