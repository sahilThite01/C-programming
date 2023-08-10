#include<stdio.h>

int main()
{
	int a[10],n,i,sum=0;
	printf("Elements kiti re baba?");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]%2!=0)
		{
			sum+=a[i];
		}
	}
	printf("Sum of odd elements = %d",sum);
	return 0;
}

