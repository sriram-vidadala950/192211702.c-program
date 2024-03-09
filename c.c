#include<stdio.h>
int main()
{
	int state = 0;
	char input;
	printf("enter the input string: ");
	while((input = getchar())!='\n'){
		if(state == 0 && input == '0')
		{
			state = 1;
		}
		else if(state == 1 && input == '1')
		{
			state = 1;
		}
		else{
			state = 2;
		}
	}
	if(state == 1)
	{
		printf("\nAccepted\n");
	}
	else{
		printf("\n Rejected \n");
	}
}
