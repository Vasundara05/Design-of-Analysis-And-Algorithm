#include<stdio.h>
int main()
{
	int n,i,l;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
		l=a[i];
	}
	printf("Largest number in array : %d",l);
	return 0;
}
