#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,sum=0,n;
	printf("enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
		for (i=1;i<=n;i++)
		{
			sum+=i;
		}
		printf("sum = %d",sum);
		return 0;
}
