#include<stdio.h>
void fib(int n)
{
	static int f=0,l=1,m;
	if(n>0)
	{
		m=f+l;
		f=l;
		l=m;
		printf("%d ",m);
		fib(n-1);
	}
}
int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);	
	printf("Fibanocci series: ");
	printf("%d %d ",0,1);
	fib(n-2);
	return 0;	
}
	
