#include<stdio.h>
int main()
{
	int n,a[n],num,found = 0,i,j;
	printf("\n enter the size of an array : ");
	scanf("%d",&n);
	printf("\n enter the elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the number to be delete : ");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		if(a[i] == num)
		{
			found = 1;
			for(j=i;j<n-1;j++)
			{
				a[j] = a[j+1];
			}
			n--;
		}
		
	}
	if(!found)
	printf("\n enterd number(%d) is not in the list....",num);
	else
	printf("\n after deleting the number(%d) : ",num);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
