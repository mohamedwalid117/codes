#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char string[50],character;
	int frequency=0,i;
	printf("enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(string);
	printf("enter a character to find frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&character);
	for(i=0;i<strlen(string);i++)
	{   if(string[i]==character){
		frequency++;
	}
	}
	printf("frequency of %c is %d ",character,frequency);
	return 0;
}
