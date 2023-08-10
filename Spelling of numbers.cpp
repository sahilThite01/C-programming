#include <stdio.h>

int main(){
	int n;
	printf("Input number; ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("ONE.");
				break;
		case 2: printf("TWO.");
				break;
		case 3: printf("THREE.");
				break;
		default: printf("Invalid Input.")			
	}
	return 0;
}
