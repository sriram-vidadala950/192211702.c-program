#include<stdio.h>
int main()
{
	int n,a[n],b[n],i,j,k = 1;
	printf("\n enter the size of an array : ");
	scanf("%d",&n);
	
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	j= 0 ;
	for(i=k;i<n;i++)
	{
		b[j++] = a[i];
	}
	for(i=0;i<k;i++)
	{
		b[j++] = a[i];
	}
	printf("\n output : ");
	for(i=0;i<n;i++)
	{
		printf("\n %d ",b[i]);
	}
}
