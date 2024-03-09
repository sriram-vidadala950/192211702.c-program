#include<stdio.h>
int main()
{
	int result = 1,power,base,i;
	printf("\n enter a base : ");
	scanf("%d",&base);
	printf("\n enter the value of power : ");
	scanf("%d",&power);
	
	
	for(i=1;i<=power;i++)
	{
		result = result*base;
	}
	printf("\n %d power of (%d) is %d...",base,power,result);
	return 0;
}
