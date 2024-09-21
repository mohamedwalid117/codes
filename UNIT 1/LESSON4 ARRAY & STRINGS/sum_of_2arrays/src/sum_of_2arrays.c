 #include <stdio.h>
#include <stdlib.h>

int main() {
	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2];
	printf("enter elements of first matrix\n");
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("enter elements of second matrix\n");

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("enter b%d%d : ",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&arr2[i][j]);
			}
		}

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			sum[i][j]=arr1[i][j]+arr2[i][j];
			}
		}printf("sum of matrix is \n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
				printf("%.1f   ",sum[i][j]);
				}
				printf("\n");
			}
	return 0;
}
