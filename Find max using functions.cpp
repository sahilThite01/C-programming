#include<stdio.h>

int findmax(int ar[],int n)
{
	int max,i;
	max=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]>ar[i+1])
			max=ar[i];
	}
	return max;
}

int main()
{
	int ar[50],i,n,m;
	printf("Elements? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%d",ar[i]);
		}
	m=findmax(ar[],n);
	printf("Max element is %d",m);
	return 0;
}
