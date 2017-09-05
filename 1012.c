#include<stdio.h>
int main()
{
	int num,i,n;
	int k,count2=0,count4=0,count5=0;
	int A1=0,A2=0,A3=0,A5=0;
	float A4=0.0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("%d",&n);
		k=n%5;
		if(k==0&&n%2==0)
		{
			A1+=n;
		}
		else if(k==1)
		{
			count2++;
			if(count2%2==0)
				A2-=n;
			else 
				A2+=n;
		}
		else if(k==2)
		{
			A3++;
		}
		else if (k==3)
		{
			count4++;
			A4+=n;
		}
		else if (k==4)
		{
			count5++;
			if(A5<=n)
				A5=n;
		}
	}
	if(A1==0)
		printf("N ");
	else 
		printf("%d ",A1);
	if(count2==0)
		printf("N ");
	else 
		printf("%d ",A2);
	if(A3==0)
		printf("N ");
	else 
		printf("%d ",A3);
	if(count4==0)
		printf("N ");
	else 
		printf("%.1f ",1.0*A4/count4);
	if(count5==0)
		printf("N");
	else 
		printf("%d",A5);
	return 0;
}