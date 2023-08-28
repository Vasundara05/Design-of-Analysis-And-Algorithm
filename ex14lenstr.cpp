#include<stdio.h>
int main()
{
	char s[50],c;
	int l=0;
	printf("Enter string:");
	scanf("%s",s);
	c=s[0];
	while(c!='\0')
	{
		l++;
		c=s[l];	
	}
	printf("Length of string:%d",l);
	return 0;
	
}
	
