#include<stdio.h>
main()
{
	int n,count = 0,i;
	printf("\n enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		count++;
	}
	if(count == 2)
	printf("\n given number %d is a prime number...",n);
	else
		printf("\n given number %d is not a prime number...",n);
}
