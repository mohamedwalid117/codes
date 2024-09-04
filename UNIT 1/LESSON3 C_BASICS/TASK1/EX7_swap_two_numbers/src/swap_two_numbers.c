#include <stdio.h>
#include <stdlib.h>

int main() {
	 float a,b,temp;
	 printf("enter value of a : ");
	 fflush(stdin); fflush(stdout);
	 scanf("%f",&a);
	 printf("enter value of b : ");
		 fflush(stdin); fflush(stdout);
		 scanf("%f",&b);
		 temp=a;
		 a=b;
		 b=temp;
		 printf("After swapping ,value of a : %.2f\n ",a);
		 printf("After swapping ,value of b : %.2f ",b);
	return 0;
}
