#include<stdio.h>
int main()
{
	int t,i;
	double a,c,rad;
	double pi=2*acos(0.0);
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf",&a,&c);
		rad=(double)((pi*c)/180.00);
		double ans=2.00*a*cos(rad);
		printf("Case %d: %.3lf\n",i+1,ans);
	}
	return 0;
}
