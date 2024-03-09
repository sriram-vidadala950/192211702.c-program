#include<stdio.h>
int main()
{
	char s1[100] = "hello world";
	char s2[100] = "hello";
	int i,temp;
		if(strcmp(s1,s2) == 0)
		printf("\n string s1(%s) and s2(%s) are same...",s1,s2);
		else
			printf("\n string s1(%s) and s2(%s) are not same...",s1,s2);
}
