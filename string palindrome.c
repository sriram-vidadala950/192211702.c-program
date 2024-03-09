#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int k,n;
	printf("\n enter a string : ");
	scanf("%s",s);
	k = strlen(s) - 1;
	n = 0;
	while(n<k)
	{
		if(s[n++] != s[k--])
		{
			printf("\n given string %s is not a palindrome...",s);
			return 0;
		}
	}
	printf("\n given string %s is a palindrome...",s);
}
