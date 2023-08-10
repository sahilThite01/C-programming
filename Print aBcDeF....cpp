#include <stdio.h>

int main()
{
	int i=97;
	while(i<=122)
	{
		if (i%2==1)
		{
			printf("%c",i);
		}
		else
		{
			printf("%c",i-32);
		}
		i++;
	}	
	return 0;
}
