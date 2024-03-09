#include<stdio.h>
main()
{
	long int n,i,even_sum = 0,odd_sum = 0;
	printf("\n enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2 == 0)
		even_sum = even_sum+i;
	}
	printf("\n sum of n even number is : %d",even_sum);
	for(i=1;i<=n;i++)
	{
		if(i%2 != 0)
		odd_sum = odd_sum+i;
	}
	printf("\n sum of n odd numbers is : %d",odd_sum);
	return 0;
}
