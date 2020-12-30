#include<stdio.h>
int main()
{
	long r,n;
	while(scanf("%ld %ld",&r,&n)==2)
	{
		double s=(double)(r/100.00);
		double t=(double)n;
		double rslt=12.00*t*s;
		printf("%.2lf\n",rslt);
	}
	return 0;
}
