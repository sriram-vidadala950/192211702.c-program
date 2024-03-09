#include<stdio.h>
main()
{
	int rev,num,rem,temp;
	printf("\n enter a number: ");
	scanf("%d",&num);
	temp = num;
    while(num)
    {
    	rem = num%10;
    	rev = rev*10 + rem;
    	num = num/10;
	}
	printf("\n reverse of given digit  %d is %d....",temp,rev);
	
}
