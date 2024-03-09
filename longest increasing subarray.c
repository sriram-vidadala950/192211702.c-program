#include<stdio.h>
int main()
{
	int n,a[n],i;
	int curlen = 1,maxlen = 1;
	int endindex = 0,curendindex = 0;
	printf("\n enter the size of an array : ");
	scanf("%d",&n);
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
		curlen++;
		curendindex = i;
	    }
		else 
		curlen = 1;
	}
	if(curlen>maxlen)
	maxlen = curlen;
	endindex = curendindex;
	printf("\n longest increasing subarray is : ");
	
}
