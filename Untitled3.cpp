#include<stdio.h>

void getv()
{
	int x,y;
	printf("Input x: ");
	scanf("%d",&x);
	printf("Input y: ");
	scanf("%d",&y);
}

int power(int x,int y)
{
	int p=1;
	while(y>0)
	{
		p=p*x;
		y--;
	}
	return p;
}

void display()
{
	//printf("%d raised to %d = %d",x,y,p);
} 

int main()
{
	int x,y,p,ans;
	getv();
	ans=power(x,y);
	printf("%d",ans);
	//display();
	return 0;
}

