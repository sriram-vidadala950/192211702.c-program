#include<stdio.h>

main()
{
	int i;
	char input[100] = " vidadala sriram;";
	char removed;
	printf("\n enter the character to be removed: \n");
	scanf("%c %c",&removed);
	
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
