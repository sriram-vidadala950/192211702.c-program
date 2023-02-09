#include<stdio.h>
int main()
{
	int n;
	printf(" enter the value of n ");
	scanf("%d",&n);
	if(n==0)
	printf(" neither positive nor negative");
	else if(n<0)
	printf(" negative ");
	else
	printf(" positive ");
	return 0;
	}
