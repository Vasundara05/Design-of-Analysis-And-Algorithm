#include<stdio.h>
int main()
{
	int n,i,p=0,l,j;
	printf("Enter a number:");
	scanf("%d",&l);
	printf("Prime number\n");
	for(j=1;j<=l;j++)
	{
	n=j;
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			p=1;
			break;
		}
	}
	if(p==0)
	printf("%d ",j);
	p=0;
	}
}
