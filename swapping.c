#include<stdio.h>
main()
{
	int a,b,temp;
	printf("\n enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	printf("\n before swapping two number is : \n");
	printf("\n a = %d  b = %d \n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("\n after swapping two number is : \n");
	printf("\n a = %d  b = %d",a,b);
}
