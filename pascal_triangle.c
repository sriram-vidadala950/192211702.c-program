#include<stdio.h>
int main()
{
	int i,j,k,c = 1;
	int row = 5;
	for(i = 0;i<row;i++)
	{
		for(j=0;j<row-i;j++)
		printf(" ");
		{
			for(k=0;k<=i;k++)
			{
				if(i==0 || k == 0)
				c = 1;
				else
				c = c*(i-k)/k;
				printf("%4d",c);
			}
		}
		printf("\n");
	}
	return 0;
}
