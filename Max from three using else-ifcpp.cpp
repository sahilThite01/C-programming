#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	printf("Enter c=");
	scanf("%d",&c);
	if (a>b && a>c){
		printf("%d is max",a);
		}
	else if (b>a && b>c){
		printf("%d is max",b);
		}
	else if (c>a && c>b){
		printf("%d is max",c);
		}
	else if (a==b && a>c){
		printf("%d and %d is max",a,b);
		}
	else if (b==c && b>a){
		printf("%d and %d is max",b,c);
		}
	else if (a==c && a>b){
		printf("%d and %d is max",a,b);
		}
	
	
	
	return 0;
}
