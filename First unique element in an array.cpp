#include<stdio.h>
#include<stdlib.h>

void getv()
{
	int *ar,n,i;
	printf("How many elements? ");
	scanf("%d",&n);
	ar=(int*)malloc(sizeof(int)*n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ar+i));
	}
}

void unique()
{
	int *ar,n,i,j,isfound;
	for(i=0;i<n;i++)
	{
		isfound=0;
		for(j=0;j<n;j++)
		{
			while(i!=j)
			{
				if(ar[i]==ar[j])
				{
					isfound=1;
					break;
				}
				if(isfound=0)
				{
					printf("%d",ar[i]);
					break;
				}
			}
		}
	}
}

int main()
{
	getv();
	unique();
	return 0;
}
