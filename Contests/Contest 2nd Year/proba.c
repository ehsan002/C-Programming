#include<stdio.h>
int main()
{
	long a,b;
	while(scanf("%ld %ld",&a,&b)==2)
	{
		long ans;
		long m=a*b;
		long n=a+b;
		if((m%n)==0)
			ans=m/n;
		else
			ans=(m/n)+1;
		printf("%ld\n",ans);
	}
	return 0;
}
