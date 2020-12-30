#include<stdio.h>
int main()
{
    long w1,w2,w3,l1,l2,l3;
    while(scanf("%ld %ld %ld %ld %ld %ld",&w1,&l1,&w2,&l2,&w3,&l3)==6)
    {
        if(w1==0&&w2==0&&w3==0&&l1==0&&l2==0&&l3==0)
            break;
        long total=w1+l1;
        long tw=w1+w2+w3;
        long l=tw-total;
        long w=total-l;
        printf("Anna's won-loss record is %ld-%ld.\n",w,l);
    }
    return 0;
}
