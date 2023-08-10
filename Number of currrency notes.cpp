#include<stdio.h>

int main()
{
	int amt,n500,n100,n50,n20,n10;
	printf("Enter amount: ");
	scanf("%d",&amt);
	
	n500=amt/500;
	amt=amt%500;
	n100=amt/100;
	amt=amt%100;
	n50=amt/50;
	amt=amt%50;
	n20=amt/20;
	amt=amt%20;
	n10=amt/10;
	amt=amt%10;
	
	
	printf("You will get %d 500 notes.",n500);
	printf("You will get %d 100 notes.",n100);	
	printf("You will get %d 50 notes.",n50);
	printf("You will get %d 20 notes.",n20);
	printf("You will get %d 10 notes.",n10);
	return 0;
}
