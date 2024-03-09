#include<stdio.h>
#include<string.h>
main()
{
	char s[100],temp;
	int i,j,l;
	printf("\n enter a string ; ");
	scanf("%s",s);
	l = strlen(s);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(s[j]<s[j+1])
			{
			temp = s[j];
			s[j] = s[j+1];
			s[j+1] = temp;
		   }
		}
	}
	printf("\n output : %s",s);
}
