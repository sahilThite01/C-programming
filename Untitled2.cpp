#include<stdio.h>

void getv()
{
	int x,y;
	printf("Input x: ");
	scanf("%d",&x);
	printf("Input y: ");
	scanf("%d",&y);
}

void power(int x,int y)
{
	int p=1;
	while(y>0)
	{
		p=p*x;
		y--;
	}
}

void display()
{
	printf("%d raised to %d = %d",x,y,p);
} 

int main()
{
	getv();
	power(x,y);
	display();
	return 0;
}

