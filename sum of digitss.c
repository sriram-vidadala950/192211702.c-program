#include<stdio.h>
main()
{
	int sum,num,rem;
     
     printf("\nenter a number :");
     scanf("%d",&num);
     int temp;
     temp = num;
     sum = 0;
     while(num!=0)
     {
     	rem = num%10;
     	sum = sum+rem/10;
     	num = num/10;
	 }
	 
	 printf("sum of digits %d is %d ",temp,sum);
}
