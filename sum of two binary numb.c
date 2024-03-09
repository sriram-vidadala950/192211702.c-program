#include<stdio.h>
main()
{
	int sum[100],rem = 0,i = 0;
    long bi1,bi2;
	printf("\n enter the first binary number : ");
	scanf("%d",&bi1);
	printf("\n enter the second binary number: ");
	scanf("%d",&bi2);
	while(bi1 != 0 || bi2 != 1)
	{
		sum[i++] = (bi1%10 + bi2 % 10 + rem)%2;
		rem = (bi1%10 + bi2 % 10 + rem)/2;
		bi1 = bi1/10;
		bi2 = bi2/10;
	}
	if(rem != 0)
		sum[i++] = rem;
		--i;
	printf("\n sum of two binary numbers : ");
	while(i>=0)
	printf("%d",sum[i--]);
	return 0;
}
