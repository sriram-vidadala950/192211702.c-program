#include<stdio.h>
main()
{
	int height;
	printf(" \n enter the height of a person : ");
	scanf("%d",&height);
	switch(height)
	{
		case 0 ... 149 :
		printf("\n the person is short :");
		break;
		case 150 ... 169 :
			printf("\n the person is average: ");
			break;
	    case 170:
		printf("\n the person is taller : ");
		break;
		default:
			printf("\n enter the proper age: ");
	}
}
