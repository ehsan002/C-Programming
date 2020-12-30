#include<stdio.h>
#include<math.h>
int main()
{
	int m1,m2,d1,d2,day,mnt;
	while(scanf("%d %d %d %d",&m1,&d1,&m2,&d2)==4)
	{
		if(m1==m2){
			day=(d2-d1);
			printf("After %d days\n",day);
		}
		else
		{
			mnt=(m2-m1);
			printf("After %d months\n",mnt);
		}
	}
	return 0;
}
