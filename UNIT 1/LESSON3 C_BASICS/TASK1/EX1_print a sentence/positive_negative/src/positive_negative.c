#include <stdio.h>
#include <stdlib.h>

int main() {
	float num;
	printf("enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if(num>0)
	{
		printf("%.2f is positive",num);
	}
	else if(num<0)
		{
			printf("%.2f is negative",num);
		}
	else
			{
				printf("you entered zero");
			}
	return 0;
}
