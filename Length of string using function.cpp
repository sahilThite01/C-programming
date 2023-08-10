#include <stdio.h>

int getLen(char *s)
{
	int len=0,i;
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	return len;
}

int main()
{
	int length;
	char s;
	scanf("%c",&s);
	length=getLen(&s);
	printf("%d",length);
	return 0;
}
