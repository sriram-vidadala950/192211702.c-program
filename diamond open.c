#include<stdio.h>
int main()
{
	int i,j,mid;
	int n = 7;
	mid = n/2+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i+j == mid+1 || i-j == n/2 || j-i == n/2 || i+j == mid+n)
			printf(" *");
			else
			printf(" ");
		}
		printf("\n");
	}
}

