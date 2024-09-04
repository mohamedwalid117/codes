#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1,num2,num3;
		printf("enter 3 numbers to compare\n");
		fflush(stdin); fflush(stdout);
		scanf("%f %f %f",&num1,&num2,&num3);
       float max = num1;

       if(num2>=max)
       {
    	   max=num2;
    	   if (num3>=max)
    	   {
    		   max = num3;
    	   }
       }
       printf("largest number is %.2f ",max);

		return 0;
}
