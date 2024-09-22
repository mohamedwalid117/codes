#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
	char string1[1000],string2[1000];

	int i,j=0;
	printf("enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(string1);
	for(i=strlen(string1)-1;i>=0;i--)
	{
		string2[j]=string1[i];
		j++;
	}
	string2[j]=0;
	printf("reverse string is %s ",string2);
	return 0;
}

