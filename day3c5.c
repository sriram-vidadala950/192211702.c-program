#include<stdio.h>
void main()
{
	int n,rn,d;
	printf(" enter the value of n");
	scanf("%d",&n);
	rn=0;
	while(n)
	{
		d=n%10;
		rn=rn*10+d;
		n=n/10;
	}
	printf(" reverse number is %d",rn);
}
