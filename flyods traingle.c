#include<stdio.h>
main()
{
	int i,j,k = 5;
	for(i=5;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k--);
		}
		printf("\n");
	}
}
