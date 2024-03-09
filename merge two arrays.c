#include<stdio.h>
main()
{
	int n1,n2,n3;
	int a[100],b[100],c[100];
	int i;
	printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for( i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
        scanf("%d",&n2);
    printf("Enter the array elements: ");
    for( i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
       n3 = n1+n2;
       for(i=0;i<n1;i++)
       c[i] = a[i];
       for(i=0;i<n2;i++)
       c[i+n1] = b[i];
       printf("\n merge  of two arrays :");
       for(i=0;i<n3;i++)
       printf("%d ",c[i]);
}
