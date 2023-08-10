#include<stdio.h>

int main()
{
	int base,power,ans=1;
	printf("Input base: ");
	scanf("%d",&base);
	printf("Input power: ");
	scanf("%d",&power);
	while (power>0)
	{
		ans=ans*base;
		power--;
	}
	printf("%d",ans);
	return 0;
}
