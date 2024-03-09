#include<stdio.h>
main()
{
	int i,j,n;
	printf(" \n 1 to 10 multiplication :\n");
	for(i =1;i<=10;i++)
	{
		for(j = 1;j<=10;j++)
		{
			printf("\n %d*%d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}
