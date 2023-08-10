#include<stdio.h>


int main()
{
	int roll,phy,chem,math,tot;
	float per;
	printf("Enter your roll number: ");
	scanf("%d",&roll);
	printf("Enter your physics marks: ");
	scanf("%d",&phy);
	printf("Enter your chem marks: ");
	scanf("%d",&chem);
	printf("Enter your maths marks: ");
	scanf("%d",&math);
	tot=(phy+chem+math);
	per=(float)tot/3;
	printf("hello");
	printf("%d %d %d %d %d %f",roll,phy,chem,math,tot,per);
	return 0;
}
