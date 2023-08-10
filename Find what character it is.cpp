#include <stdio.h>

int main(){
	int ch;
	printf("Input a character: ");
	scanf("%c",&ch);
	if (ch>=97 && ch<=122)
		{printf("Upper Case");
		}
	else if (ch>=65 && ch<=90)
		{printf("Lower Case");
		}
	else if (ch>='0' && ch <='9')
		{ printf("Numeric");
		}	
	else
		{printf("Symbolic");
		}
	return 0;
}
