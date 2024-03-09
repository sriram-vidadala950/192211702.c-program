#include<stdio.h>
int main()
{
	int n,r,arm = 0,temp;
	printf("\n enter a number :");
	scanf("%d",&n);
	temp = n;
	int i;
	while(n!=0)
	{
		r = n%10;
		arm = arm+(r*r*r);
		n = n/10;
	}
	if(temp == arm)
	printf("\n armstrong ");
	else
	printf("\n not armstrong ");
}
