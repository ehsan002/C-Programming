#include<stdio.h>
int main()
{
    int n,h,w,i,j,k;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
            break;
        if(n==1)
        {
            scanf("%d",&h);
            int k=0;
            for(i=0;i<h;i++){
                for(j=i;j<h-1;j++)
                    printf(" ");
                for(j=k;j>=0;j--)
                    printf("*");
                printf("\n");
                k+=2;
            }
            printf("\n");
        }
        if(n==2)
        {
            scanf("%d %d",&w,&h);
            for(i=0;i<h;i++){
                for(j=i;j<h-1;j++)
                    printf(" ");
                for(j=0;j<w;j++)
                    printf("*");
                printf("\n");
            }
            printf("\n");
        }
        if(n==3)
        {
            scanf("%d %d",&w,&h);
            for(i=0;i<h;i++)
            {
                for(k=0;k<w;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
