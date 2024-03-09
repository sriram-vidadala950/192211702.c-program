#include<stdio.h>
main()
{
	int a,b,c,n;
	a = 0,b = 1;
	printf("\n enter the series: ");
	scanf("%d",&n);
	int i;
	printf("\n fibonacci series : ");
	for(i=0;i<=n;i++)
	{
		c = a+b;
		printf("%d ",c);
		a = b;
		b = c;
	}
	return 0;
}
