#include<stdio.h>
main()
{
	int a[100],i,j,temp;
	int n;
	printf(" enter the size of an array: \n");
	scanf("%d",&n);
	printf("\nenter the elements into the array: \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n/2;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		for(j=n/2;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n output is : ");
	for(i=0;i<n;i++)
	printf(" %d\t ",a[i]);
}
