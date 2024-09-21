#include <stdio.h>
#include <stdlib.h>

int main() {
	float array[100];
	int n,i ;
	float sum=0,average;
	printf("enter number of elements ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{

				printf("enter number : ");
				fflush(stdin); fflush(stdout);
				scanf("%f",&array[i]);
		}
	for(i=0;i<n;i++)
			{
				sum+=array[i];
			}
	average=sum/n;
	printf("average = %f",average);
	return 0;
}
