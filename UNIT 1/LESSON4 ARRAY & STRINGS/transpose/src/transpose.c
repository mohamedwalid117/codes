#include <stdio.h>
#include <stdlib.h>
int main() {
	int array[10][10];
	int trans[10][10];
	int i,j,rows,col;
	printf("enter number of row and columns\n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&rows,&col);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter array element[%d][%d]: ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&array[i][j]);
		}
	}
	printf("the array : \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",array[i][j]);

		}
		printf("\n");
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			trans[j][i]=array[i][j];
		}
	}
	printf("the transpose : \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d  ",trans[i][j]);

		}
		printf("\n");
	}

	return 0;
}

