#include<stdio.h>
void main()
{
	int n,rn,d,temp;
	printf(" enter the value of n");
	scanf("%d",&n);
	rn=0;
	temp=n;
	while(n=0);
	{
		d=n%10;
		rn=rn*10+d;
		n=n/10;
	}
	if(temp==rn)
	printf("palindron");
	else
	printf(" not palindrom ");
}
