#include<stdio.h>
int main()
{
	int num,t,i,j,count=0,flag=1;
	int a[101];
	scanf("%d", &num);
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=num-2;i++)
	{
		for(j=i+1;j<=num-1;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<=num-1;i++)
	{
		t=a[i];
		while(t!=0&&t!=1)
		{
			if(t%2==1)
				t = (3 *t + 1) / 2;
			else
				t=t/2;
			for(j=0;j<=num-1;j++)
			{
				if(a[j]==t)
					a[j]=0;
			}
		}
	}
	for(i=0;i<=num-1;i++)
	{
		if(a[i]!=0)
		{
			count=count+1;
		}
	}
	for(i=0;i<=num-1;i++)
	{
		
		if(a[i]!=0 && flag!=count)
		{
			printf("%d ",a[i]);
			flag++;
		}
		else if(a[i]!=0 && flag==count)
		{
			printf("%d",a[i]);
		}
		
	}
	return 0;
}
