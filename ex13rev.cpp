#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int i,c=0;
	printf("Enter string:");
	scanf("%s",s);
	char r[strlen(s)];
	for(i=strlen(s)-1;i>=0;i--)
	{
		r[c]=s[i];
		c++;
	}
	printf("Reverse:%s",r);
	return 0;
	
}
	
