#include<stdio.h>
int main()
{
	int a[50],i,n,e,c=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(e==a[i])
		{
		c++;
		printf("Element found in position %d\n",i+1);
		}		
	}
	if(c==0)
	printf("Element not found");	
}
