#include <stdio.h>

int main()
{
	int sp,profit,cp,i=1;
	while (i<16)
	{
		printf("Item %d\n",i);
		printf("Input selling price: ");
		scanf("%d",&sp);
		printf("Input profit earned: ");
		scanf("%d",&profit);
		cp=sp-profit;
		printf("Cost price of the item is %d\n",cp);
		i++;
	}
	return 0;
}

