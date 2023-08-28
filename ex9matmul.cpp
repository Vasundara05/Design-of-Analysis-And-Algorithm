#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],m[20][20],i,j,k,r,c;
	printf("Rows:");
	scanf("%d",&r);
	printf("Columns:");
	scanf("%d",&c);
	printf("Enter matrix 1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix 2:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiplication:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m[i][j]=0;
			for(k=0;k<c;k++)
			{
				m[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}








