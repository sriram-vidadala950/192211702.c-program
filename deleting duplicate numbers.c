#include<stdio.h>
int main()
{
	int n,a[n],i,j,k;
	printf("\n enter the size of an array : ");
	scanf("%d",&n);
	
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k] = a[k+1];
				}
				n--;
			}
		}
	}
	printf("\n after deleting duplicate numbers : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
