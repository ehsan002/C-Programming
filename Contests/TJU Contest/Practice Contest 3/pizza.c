#include<stdio.h>
#include<math.h>
int main()
{
    int r,l,w;
    long t=0;
    while(scanf("%d",&r)==1)
    {
        if(r==0)
            break;
        t++;
        scanf("%d %d",&w,&l);
        double k=sqrt((w*w)+(l*l))/2;
        if(k<=r)
            printf("Pizza %ld fits on the table.\n",t);
        else
            printf("Pizza %ld does not fit on the table.\n",t);
    }
    return 0;
}
