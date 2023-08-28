#include<stdio.h>
int pow(int b,int p)
{
	int a=b,i;
	for(i=1;i<p;i++)
	a*=b;
	return a;
}
int len(int n)
{
	int r,l=0;
	while(n!=0)
	{
		r=n%10;
		l++;
		n/=10;
	}
	return l;
}
int main()
{
	int v,s=0,u,i,t;
	printf("Enter the number:");
	scanf("%d",&v);
	u=len(v);
	t=v;
	while(v!=0)
	{
		i=v%10;
		s+=pow(i,u);
		v=v/10;
	}
	if(t==s)
	printf("Amstrong number");
	else
	printf("Not an amstrong number");
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

