#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[3000],temp;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++)
        {
            if((abs(a[i]-a[i+1])==abs(a[i+1]-a[i+2])-1)||(abs(a[i]-a[i+1])==abs(a[i+1]-a[i+2])+1))
                temp=1;
            else
            {
                temp=0;
                break;
            }
        }
        if(temp==1)
            printf("Jolly Number\n");
        else
            printf("Not Jolly Number\n");
    }
    return 0;
}
