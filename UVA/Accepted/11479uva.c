#include <stdio.h>
int main()
{
    long long a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if((abs(b-c)>=a)||(c+b)<=a||a<=0||b<=0||c<=0)
            printf("Case %d: Invalid\n",i+1);
        else{
            if((a!=b)&&(a!=c)&&(b!=c))
                printf("Case %d: Scalene\n",i+1);
            if((a==b)&&(b==c))
                printf("Case %d: Equilateral\n",i+1);
            if(((a==b)&&(b!=c))||((a==c)&&(b!=c))||((b==c)&&(a!=b)))
                printf("Case %d: Isosceles\n",i+1);
        }
    }
    return 0;
}
