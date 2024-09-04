#include <stdio.h>
#include <stdlib.h>

int main() {
	char alpha;
	printf("enter an alphapet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
	if(alpha=='a'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='e'||alpha=='A'||alpha=='I'||alpha=='O'||alpha=='U'||alpha=='E')
	{
		printf("%c is a vowel",alpha);
	}
	else
	{
		printf("%c is consonant",alpha);
	}
	return 0;
}
