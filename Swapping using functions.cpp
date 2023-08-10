#include <stdio.h>

void swapping(int *a, int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Before swapping:\n x=%d \t y=%d\n",x,y);
	swapping(&x,&y);
	printf("After swapping:\n x=%d \t y=%d\n",x,y);
	return 0;
	
}
