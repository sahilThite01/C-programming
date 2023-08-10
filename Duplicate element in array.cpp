#include<stdio.h>
#include<stdlib.h>

/*		
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

void duplicate()
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
				if(isfound=1)
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
	duplicate();
	return 0;
}*/

int main()
{
	int *arr,ar[10],n,i,j,isfound;
	printf("How many elements? ");
	scanf("%d",&n);
	//ar=(int*)malloc(sizeof(int)*n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ar+i));
	}
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
				if(isfound=1)
				{
					printf("%d ",ar[i]);
					break;
				}
			}
		}
	}
	return 0;
}
