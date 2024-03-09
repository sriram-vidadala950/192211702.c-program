#include<stdio.h>
#define n 6
main()
{
	char input[n] = "sriram";
	char removed;
	int i;
	printf("\n enter the character to be removed: \n");
	scanf("%s",&removed);
	
	int j = 0;
	for(i=0;input[i]!='\0';i++)
	{
		if(input[i] != removed)
		{
			input[j++] = input[i];
		}
	}
	input[j] = '\0';
	printf("\n string after removing %c is : %s\n",removed,input);
	
	return 0;
}
