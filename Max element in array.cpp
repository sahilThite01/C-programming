#include<stdio.h>

int main()
{
	int a[10],n,i,max;
	printf("Elements kiti re baba?");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for (i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Max element is %d",max);
	return 0;
}
