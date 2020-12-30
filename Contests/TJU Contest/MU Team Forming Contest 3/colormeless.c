#include <stdio.h>
#include <math.h>
int main()
{
    int a[100][100],m,n,o,i;
    for(i=0;i<16;i++)
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    while(scanf("%d %d %d",&m,&n,&o)==3)
    {
        if(m==-1&&n==-1&&o==-1)
            break;
        float min=11111.00;
        int f;
        for(i=0;i<16;i++)
        {
            int sum=(a[i][0]-m)*(a[i][0]-m)+(a[i][1]-n)*(a[i][1]-n)+(a[i][2]-o)*(a[i][2]-o);
            float rslt=sqrt(sum);
            if(rslt<min)
            {
                min=rslt;
                f=i;
            }
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",m,n,o,a[f][0],a[f][1],a[f][2]);
    }
    return 0;
}
