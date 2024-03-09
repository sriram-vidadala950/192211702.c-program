#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter three values : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n %d is greatest number \n",a);
	}
	else if(b>c && b>a)
	{
		printf("\n %d is greates number \n",b);
	}
	else
		{
		printf("\n %d is greates number \n",c);
	}
}
