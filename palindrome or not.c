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
	printf("\n  %d output is : %d....\n",temp,rev);
	if(temp == rev)
	{
		printf(" \n given number %d is palindrome:...\n ",temp);
	}
	else
	{
		printf(" \n given number %d is not palindrome:... \n ",temp);
	}
}
