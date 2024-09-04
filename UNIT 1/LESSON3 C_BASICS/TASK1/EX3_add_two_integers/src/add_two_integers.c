#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1,num2;
	printf("enter two integers");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	int sum = num1+num2;
	printf("sum= %d",sum);
	return 0;
}
