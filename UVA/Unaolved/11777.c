#include<stdio.h>
int main()
{
    int i,j,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<7;j++)
            scanf("%d",&a[i]);
        if(a[4]<a[5]&&a[4]<a[6])
            sum=(a[5]+a[6])/2;
        if(a[6]<a[5]&&a[6]<a[4])
            sum=(a[4]+a[5])/2;
        if(a[5]<a[6]&&a[5]<a[4])
            sum=(a[4]+a[6])/2;
        int total=sum+a[0]+a[1]+a[2]+a[3];
        if(total>=90)
            printf("A\n");
        else if(total>=80)
            printf("B\n");
        else if(total>=70)
            printf("C\n");
        else if(total>=60)
            printf("D\n");
        else
            printf("F\n");
    }
    return 0;
}
