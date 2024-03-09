// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%2 != 0)
    {
        printf("weird\n");
    }
    else
    {
    	if(n>=2 && n<=5)
    	{
    		printf("\n not weird\n");
		}
		else if(n>=6 && n<=20)
		{
			printf("\n weird ");
		}
		else
		{
			printf("\n not weird");
		}
	}
		
	
}
