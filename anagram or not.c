#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100];
	int i,j,n;
	printf("\n enter the first string: ");
	scanf("%s",s1);
	printf("\n enter the second string: ");
	scanf("%s",s2);
	int k = 0;
	n = strlen(s1);
	
	if(s1 != s2)
	printf("\n s1(%s) and s2(%s) are not anagrams..",s1,s2);
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(s1[i] == s2[j])
			s2[j] = '\0';
			k++;
		}
	}
	if(k==n)
	printf("\n s1(%s) and s2(%s) are anagrams..",s1,s2);
}
