#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10];
	int i,n,inserted,pos;
	printf("enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter array elements : \n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&inserted);
	printf("enter the position to be inserted in: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		}
      arr[pos-1]=inserted;
      n=n+1;
      for(i=0;i<n;i++)
      	{
      		printf("%d ",arr[i]);

      	}
	return 0;
}
