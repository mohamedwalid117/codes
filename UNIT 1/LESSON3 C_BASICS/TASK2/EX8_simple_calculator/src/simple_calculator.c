 #include <stdio.h>
#include <stdlib.h>
int main() {
	float num1,num2;
	char ope;
	printf("enter an operator : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ope);

	printf("enter two numbers : ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&num1,&num2);

	switch(ope)
	   {
	   case '+':
	   {
		float sum =num1+num2;
		printf("sum = %.3f",sum);
		break;
	   }
	   case '-':
	   {
		   float diff =num1-num2;
		   printf("difference = %.3f",diff);
		   break;
	   }
	   case '*':
	  	   {
	  		float product =num1*num2;
	  		printf("product = %.3f",product);
	  		break;
	  	   }
	   case '/':
	  	   {
	  		float quotient =num1/num2;
	  		printf("quotient = %.3f",quotient);
	  		break;
	  	   }
	   default:
		   printf("wrong operator");
		  	   break;
	   }
	return 0;
}
