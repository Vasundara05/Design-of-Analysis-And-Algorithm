#include<stdio.h>
int main()
{
	int n1,n2,r;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	r=n1%n2;
	while(r!=0)
	{
		n1=n2;
		n2=r;
		r=n1%n2;
	}
	printf("Gcd: %d",n2);
	return 0;
}
