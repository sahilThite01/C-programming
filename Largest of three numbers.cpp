#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	printf("Enter c=");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d is lagrest.",a);
		}
		else{
			printf("%d is lagrest.",c);
		}
	}
	else{
		if(b>c){
			printf("%d is lagrest.",b);
		}
		else{
			printf("%d is lagrest.",c);
		}
	}
	return 0;
}
