#include<stdio.h>
int main()
{
	int a,b,c;
	double pi=2*acos(0);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		int arear=a*b;
		double areac=pi*c*c;
		double rslt=(double)arear-areac;
		printf("%.4lf\n",rslt);
	}
	return 0;
}
