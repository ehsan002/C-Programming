#include<stdio.h>
int main()
{
	int a,b,c,d,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		double q=sqrt(b*b+a*a-(2*b*c*cos(c)));
		printf("%.2lf\n",q);
	}
	return 0;
}
