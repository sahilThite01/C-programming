#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Input  a=");
	scanf("%d",&a);
	printf("Input  b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("After swapping:\n");
	printf("a=%d \t b=%d",a,b);
	return 0;
}

