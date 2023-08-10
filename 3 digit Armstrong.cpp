#include<stdio.h>

int main()
{
	int n,sum=0,r,cpy;
	printf("Input number: ");
	scanf("%d",&n);
	cpy=n;
	while(n>0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;
	}
	if(cpy==sum)
		printf("Armstrong Number");
	else
		printf("Not Armstrong Number");
	
	return 0;	
}
