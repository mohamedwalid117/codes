#include <stdio.h>
#include <stdlib.h>

int main() {
	char character;
	int value;
	printf("enter any character: ");
	 fflush(stdin); fflush(stdout);
	 scanf("%c",&character);
	 value=character;
	 printf("ASCII value of %c = %d",character,value);
	return 0;
}
