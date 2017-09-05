#include<stdio.h>
int main()
{
	int n,k=1;
	long long a,b,c;
	while(scanf("%d",&n)==1)
	{
		for(k=1;k<=n;k++)
		{
			scanf("%lld%lld%lld",&a,&b,&c);
			printf("Case #%d: ",k);
			if(a+b>c)
			{
				printf("true\n");
			}
			else
				printf("false\n");
		}
	}
	return 0;
}
		