#include<stdio.h>
main()
{
	char s[100];
	printf("\nenter a string: ");
	scanf("%s",s);
	int i;
	int j =0;
	for(i=0; s[i] != '\0'; i++)
	{
		if(!(s[i] == 'a' || s[i] == 'A' || 
		     s[i] == 'e' || s[i] == 'E' || 
	         s[i] == 'i' || s[i] == 'I' ||
		     s[i] == 'o' || s[i] == 'O' ||
		     s[i] == 'u' || s[i] == 'U'))
		   {
		   	  s[j++] = s[i];
		   }
	}
	s[j] = '\0';
	printf(" string after deleting vowels from it is ---> %s \n",s);
	
	return 0;
}
