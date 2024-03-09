#include<stdio.h>
main()
{
	int i,j,k,c = 1;
	int row = 5;
	for(i = 1;i<=row;i++)
	{
		for(j=5;j>=1;j--)
		{
			if(i>=j)
			printf("4*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
