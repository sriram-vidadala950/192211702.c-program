#include<stdio.h>
int main()
{
	int n,a[n],i,sum = 0,expected_sum,missing_element;
	printf("\n enter the size of an array : ");
	scanf("%d",&n);
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum = 0;
	for(i=0;i<n;i++)
	{
	sum = sum + a[i];
    }
	expected_sum = (n+1)*(n+2)/2;
	missing_element = expected_sum - sum;
	printf("\n missing element from the array is %d ",missing_element);
}
