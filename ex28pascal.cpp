#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	if(n>0)
	{
	for(i=1;i<=n;i++)
	f=f*i;
	return f;
	}
	else if(n==0)
	return 1;
}
int main()
{
	int n,i,j,k,s,l=0;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	s=n-1;
	for(i=0;i<n;i++)
	{
		for(k=1;k<=s;k++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			l=fact(i)/(fact(j)*fact(i-j));
			printf("%d ",l);
		}
		
		s--;
		printf("\n");
	}
}
