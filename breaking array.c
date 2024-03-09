#include<stdio.h>
main()
{
	int a[100],n1,i;
	printf("\n enter elements of original array : ");
	scanf("%d",&n1);
	printf("\n enter elements into the original array : ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	int n2 = n1/2;
	int n3 = n1 - n2;
	 
	int sub_array1[n2];
	int sub_array2[n3];
	
	for(i=0;i<n2;i++)
	sub_array1[i] = a[i];
	
	for(i=0;i<n3;i++)
	sub_array2[i] = a[n3+i];
	
	printf("\n first sub array : ");
	for(i=0;i<n2;i++)
	printf("%d ",sub_array1[i]);
	
	printf("\n second sub array : ");
	for(i=0;i<n3;i++)
	printf("%d ",sub_array2[i]);
	
	
}
