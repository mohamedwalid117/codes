#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1,num2;
	printf("enter two integers");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	float product = num1*num2;
	printf("product= %f",product);
	return 0;
}

