#include<stdio.h>
main()
{
	int rem,num,sum,temp;
	printf("\n enter a number : ");
	scanf("%d",&num);
	temp = num;
	int i = 0;
	while(num)
	{
		rem = num%10;
		sum = sum+rem+1;
		num = num/10;
	}
	printf("\n sum given digits  %d increment by 1 is : %d",temp,sum);
	
}
