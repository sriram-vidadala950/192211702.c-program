#include<stdio.h>
void main()
{
	int a,b,c;
	a=1;
	b=2;
	printf(" %d\t%d\t",a,b);
	do{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	while(c<10);
}
