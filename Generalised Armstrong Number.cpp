#include<stdio.h>

int main()
{
	int n,cpy,len=0,ans=1,y,r,sum=0,cpy2;
	printf("Input number: ");
	scanf("%d",&n);
	cpy=n;
	while(n>0)
	{
		len++;
		n=n/10;
	}
	cpy2=cpy;
	while(cpy2>0)
	{
		r=cpy2%10;
		y=len;
		while(y>0);
		{
			ans=ans*r;
			y--;
		}
		sum+=ans;
		cpy2=cpy2/10;
	}
	if(sum==cpy)
		printf("Armstrong Number");
	else
		printf("Not an Armstrong Number");	
	return 0;
}
