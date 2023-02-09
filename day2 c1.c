#include<stdio.h>
main()
{
	int a,b;
	printf(" enter a,b values ");
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		if(a==b)
		printf("both are equal");
		else
		printf(" a greater than b");
	}
	else
	printf(" a less than b");
}
