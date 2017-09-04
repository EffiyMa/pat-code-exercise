#include<stdio.h>
int main()
{
	int n,m,i;
	int a[101];
	while(scanf("%d%d",&n,&m)==2&&n!=0)
	{
		if(m>n)
			m=m%n;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(n!=m)
		{	
			for(i=n-m;i<=n-1;i++)
			{
				printf("%d ",a[i]);
			}
			for(i=0;i<n-m;i++)
			{
				if(i!=n-m-1)
					printf("%d ",a[i]);
				else 
					printf("%d\n",a[i]);
			}
		}
		if (n==m)
		{
			for(i=0;i<=n-1;i++)
			{
				if(i!=n-1)
				{
					printf("%d ",a[i]);
				}
				else 
				{
					printf("%d\n",a[i]);
				}
			}
		}
	}
	return 0;
}
