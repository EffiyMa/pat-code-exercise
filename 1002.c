#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *py[11] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "shi"}; 
	char n[100];
	int sum=0,i=0,j=0;
	int a[10];
	gets(n);
	for(i=0;i<strlen(n);i++)
	{
		sum=sum+n[i]-'0';
	}
	while (sum!=0)
	{
		a[j]=sum%10;
		sum=sum/10;
		j++;
	}
	printf("%s",py[a[j-1]]);
	for(j=j-2;j>=0;j--)
	{
		printf(" %s",py[a[j]]);
	}
	return 0;
	
}
