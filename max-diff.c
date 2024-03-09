#include<stdio.h>
int main()
{
	int *p1, *p2;
	int n,a[n],max = 0,min,i,j;
	printf("\n enter the size of an array :  ");
	scanf("%d",&n);
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p1 = &max;
	p2 = &min;
	
	for(i=0;i<n;i++)
	{
		if(a[i]>*p1)
		*p1 = a[i];
	}
	*p2 = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<*p2)
		*p2 = a[i];
	}
	printf("\n %d is maximum : ",*p1);
	printf("\n %d is minimum : ",*p2);
	printf("\n %d is maximum difference between two numbers : ",max-min);
}
