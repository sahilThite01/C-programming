#include<stdio.h>

int main()
{
	int a[10],b[10],n,i;
	printf("Elements kiti re baba?");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
	}
	for (i=0;i<n;i++)
	{
		printf("%d \t",b[i]);
	}
	return 0;
}
