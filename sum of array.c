#include<stdio.h>
int main()
{
	int *p2;
	int n,a[n],sum = 0,i;
	printf("\n enter the size of an array : ");
	scanf("%d",&n);
	
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p2 = &a;
	for(i=0;i<n;i++)
	{
		sum = sum + *(p2);
		p2++;
	}
	printf("\n sum of elements in the array is : %d ",sum);
}
