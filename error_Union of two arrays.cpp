#include<stdio.h>

int main()
{
	int a[10],b[10],u[100],u_len=0,n1,n2,i,j,isfound;
	printf("Elements kiti re baba 1st array madhe?");
	scanf("%d",&n1);
	printf("Enter elements in 1st array:\n");
	for (i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements kiti re baba 2nd array madhe?");
	scanf("%d",&n2);
	printf("Enter elements in 2nd array:\n");
	for (i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		j=0;
		while(j<n1)
			if (a[i]==u[j])
			{
				isfound=1;
				j++;
				break;
			}
			if(isfound==0)
			{
				u[u_len]=a[i];
				u_len++;
			}
		j++;
	}
	for(i=0;i<n2;i++)
	{
		j=0;
		while(j<n2)
			if (b[i]==u[j])
			{
				isfound=1;
				j++;
				break;
			}
			if(isfound==0)
			{
				u[u_len]=b[i];
				u_len++;
			}
		j++;
	}
	printf("Union array is:\n");
	for(i=0;i<u_len;i++)
	{
		printf("%d ",u[i]);
	}
	return 0;
}
