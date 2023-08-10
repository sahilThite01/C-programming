#include<stdio.h>

int main(){
	int n;
	printf("Input a number: ");
	scanf("%d",&n);
	if (n>0)
		printf("+ve number.");		
	else if (n<0)
		printf("-ve number.");		
	else
		printf("ZERO");
	
	return 0;
}
