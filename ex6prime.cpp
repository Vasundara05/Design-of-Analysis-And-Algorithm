#include<stdio.h>
int main()
{
	int n,i,p=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			p=1;
			break;
		}
	}
	if(p==0)
	printf("Prime number");
	else
	printf("Not a prime number");
}
