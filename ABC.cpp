#include<stdio.h>

int main(){
	char ch;
	printf("Enter any Character:\n");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122){
		printf("Lower case.");
	}
	else(ch>=65 && ch<=90){
		printf("Upper case.");
	}

	return 0;
}
