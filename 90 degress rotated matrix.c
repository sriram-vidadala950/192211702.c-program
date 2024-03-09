#include<stdio.h>
int main()
{
	int a[100][100],i,j,temp,n,m;
	
	printf(" enter the size of m and n: \n");
	scanf("%d %d",&m,&n);
	
	printf("\nenter the elements into the array: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nentered matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m/2;i++)
	{
		for(j=i;j<n-i-1;j++)
		{
			temp = a[i][j];
			a[i][j] = a[m-j-1][i];
			a[m-j-1][i] = a[n-i-1][m-j-1];
			a[n-i-1][m-j-1] = a[j][n-i-1];
			a[j][n-i-1] = temp;
		}
		printf("\n");
	}
	
	printf("\n Rotated matrix is: \n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
}
