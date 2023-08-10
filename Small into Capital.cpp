#include<stdio.h>

int main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	ch-=32;
	printf("%c",ch);
	return 0;
}
