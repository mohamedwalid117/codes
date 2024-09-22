#include <stdio.h>
#include <stdlib.h>

int main() {
	char string[1000];
	int lenght=0,i;
	printf("enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(string);
	for(i=0;i<1000;i++)
	{   if(string[i]==0){
	    break;
	    }
	else
	{
		lenght++;
	}
	}
	printf("lenght of string is %d ",lenght);
	return 0;
}
