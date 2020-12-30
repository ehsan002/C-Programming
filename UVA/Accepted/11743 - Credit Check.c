#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char a[20],b[20];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        int sum=0,j,k;
        gets(b);

        for(j=0,k=0;j<19;j++)
        {
            if(b[j]==' ')
                continue;
            else
            {
                a[k]=b[j];
                k++;
            }
        }

        for(j=0;j<16;j++)
        {
            if(j%2==0)
            {
                int t=(a[j]-48)*2;
                if(t>9)
                {
                    t=(t/10)+(t%10);
                }
                sum+=t;
            }
            else
                sum+=(a[j]-48);

        }

        if(sum%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");

    }
    return 0;
}
