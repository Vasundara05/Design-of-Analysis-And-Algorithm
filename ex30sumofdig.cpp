#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s+=r;
		n=n/10;
	}
	printf("Sum of digits:%d",s);
	return 0;
}
