#include<stdio.h>
int main()
{
    int n,i,j,t,a[10];

    scanf("%d",&n);
    printf("Lumberjacks:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<10;j++)
            scanf("%d",&a[j]);

        if(a[0]>a[1])
        {
            for(j=0;j<8;j++)
            {
                if(a[j+1]>a[j+2])
                    t=1;

                else{
                    t=0;
                    break;
                }
            }
        }

        else
        {
            for(j=0;j<8;j++)
            {
                if(a[j+1]<a[j+2])
                    t=1;
                else{
                    t=0;
                    break;
                }
            }
        }


        if(t==1)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
