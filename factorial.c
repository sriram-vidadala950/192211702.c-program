#include<Stdio.h>
main()
{
	int fact,i,n;
	printf("\n enter a factorial number : ");
	scanf("%d",&n);
	fact = 1;
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("\n factorial of %d! is : %d",n,fact);
}
