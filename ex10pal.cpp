#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],r[50];
	int i,c=0;
	printf("Enter string:");
	scanf("%s",s);	
	for(i=strlen(s)-1;i>-1;i--)
	{
		r[c]=s[i];
		c++;
	}
	if(strcmp(s,r)==0)
	printf("Pallindrome");
	else
	printf("Not a pallindrome");
	return 0;
	
}
	
