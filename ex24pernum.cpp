#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
		s+=i;	
	}
	if(n==s)
	printf("%d is perfect number",s);
	else
	printf("%d is not a perfect number",s);
	return 0;
}
