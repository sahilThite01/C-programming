//LCM= (a*b)/GCD

#include<stdio.h>

int main()
{
	int a,b,c,gcd;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a*b;
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
	gcd=a;
	printf("%d",c/gcd);	
	return 0;
}
