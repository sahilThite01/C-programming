#include <stdio.h>

int main(){
	char ch;
	printf("Input character: ");
	scanf("%c",&ch);
	if (ch>=97 && ch<=122)
		{
		switch(ch)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':{printf("VOWEL.");
					 break;}
			default:printf("CONSONENT.");
			}
		}
	else if (ch>=65 && ch<=90)
		{	
		switch(ch)
			{	
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':{printf("VOWEL.");
					 break;}
			default:printf("CONSONENT.");
			}
		}
	else
		{
		printf("Invalid input.");
		}
	return 0;
}

