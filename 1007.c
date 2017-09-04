#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	int a[100001];
	int count1=2,flag=0,count2=0;
	a[0]=2,a[1]=3;
	scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
			else
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			a[count1]=i;
			count1++;
		}
	}
	for(i=0;i<=count1-2;i++)
	{
		if(a[i+1]-a[i]==2)
			count2++;
	}
	printf("%d",count2);
	return 0;
}
