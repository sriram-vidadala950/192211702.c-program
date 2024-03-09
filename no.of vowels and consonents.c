#include<stdio.h>
main()
{
	char s[100] = "helloworld";
	int i,vowels = 0,consonents = 0;
	for(i=0;s[i] != '\0';i++)
	{
		if(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u')
		{
	    vowels++;
	    printf("\n vowels: %c \n",s[i]);
	    }
	}
	for(i=0;s[i] != '\0';i++)
	{
	    if(!(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u'))
	    {
	    	consonents++;
	    	printf("\n consonents: %c \n",s[i]);
		}
	    
	}
	printf("\n no.of vowels in the given string %s is %d",s,vowels);
	printf("\n no.of consonents in the given string %s is %d",s,consonents);
	
}
