#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	while(a!=b)
	{
		if(a>b)
		{
			a-=b;
		}
		else
		{
			b-=a;
		}
	}
	printf("%d",a);
	return 0;
}
