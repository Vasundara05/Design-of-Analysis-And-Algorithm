#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],c[50];
	printf("Enter string:");
	scanf("%s",s);
	strcpy(c,s);
	printf("Copied string:%s",c);
	return 0;
}
