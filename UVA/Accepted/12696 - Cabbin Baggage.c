#include<stdio.h>

int main()
{
    int n,i,count=0;
    float h,w,d,m;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%f %f %f %f",&h,&w,&d,&m);
        if((h<=56&&w<=45&&d<=25&&m<=7)||(((h+w+d)<=125)&&m<=7))
        {
            printf("1\n");
            count++;
        }
        else
            printf("0\n");
    }

    printf("%d\n",count);


    return 0;
}
