#include<stdio.h>
int main()
{
	long m,h,t;
	while(scanf("%ld %ld %ld",&m,&h,&t)==3)
	{
		if(m==0&&h==0&&t==0)
			break;
		double w=(double)(m*9.8*h);
		double p=w/(t*60);
		printf("%.2lf J work and %.2lf W power.\n",w,p);
	}
	return 0;
}
