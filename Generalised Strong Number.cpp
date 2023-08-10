#include<stdio.h>

int main()
{
	int fact=1,sum=0,r,cpy,n=1;
	while (n>=1 && n<=1000)
	{
		cpy=n;
		while (cpy>0)
		{
			r=cpy%10;
			while(r>1)
			{
				fact=fact*r;
				r--;
			}
			sum+=fact;		
			cpy/=10;
		}
		if (n==sum)
			printf("%d",n);
		n++;
	}
	return 0;
}
