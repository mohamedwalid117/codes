#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10];
	int i,n,searched;
	printf("enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&searched);

	for(i=0;i<n;i++)
		{
			if(searched==arr[i])
			{
				printf("number found at location = %d",i+1);
				break;
			}
		}
       if(i==n)
    	   {
    	   printf("element not found");
    	   }
	return 0;
}
