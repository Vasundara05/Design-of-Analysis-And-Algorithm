#include<stdio.h>
int main()
{
	int a[50],i,j,n,t,m;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[m])
			m=j;
		}
		if(m!=i)
		{
			t=a[m];
			a[m]=a[i];
			a[i]=t;
		}
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
