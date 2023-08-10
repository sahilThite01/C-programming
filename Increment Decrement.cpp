#include<stdio.h>

int main(){
	int a=3,b=5,c,d,e,f,g,h;
	c=--a;
	printf("%d",&c);
	d=++b;
	printf("%d",&d);
	e=d--;
	printf("%d",&e);
	f=++b;
	printf("%d",&f);
	g=e++;
	printf("%d",&g);
	h=b++;
	printf("%d",&h);
	return 0;
}
