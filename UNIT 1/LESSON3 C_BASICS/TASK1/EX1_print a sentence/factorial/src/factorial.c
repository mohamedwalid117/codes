#include <stdio.h>
#include <stdlib.h>

int main() {
	int num,fact=1,i;
	printf("enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if (num<0)
	{
		printf("ERROR!!!factorial of negative doesn`t exist");
	}
	else
	{
		for(i=num;i>0;i--)
		{
			fact*=i;
		}
		printf("factorial %d = %d ",num,fact);
	}
	return 0;
}
