#include<stdio.h>
int main()
{
	int decnum,octnum[100],i=0,j;
	printf("\n enter a decimal number: \n");
	scanf("%d",&decnum);
	
	if(decnum<0)
	{
		printf("\nenter a positive number: ");
		return 1;
	}
	 i=0;
	 while(decnum!=0)
	 {
	 	octnum[i] = decnum % 8;
	    decnum    = decnum / 8;
	 	i++;
	 }
	 
	 printf("\n octal number is :\n ");
	 for(j=i-1;j>=0;j--)
	 {
	 	printf("%d",octnum[j]);
	 }
	 printf("\n");
	 return 0;
}
