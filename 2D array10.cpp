#include<stdio.h>


int main()
{
	int m, n, sum = 0;
	printf("\n Please enter the row and column size = ");
	scanf("%d %d",&m,&n);
	int i, j;
	int mat[m][n];
	printf("\n Please enter the matrix elements = \n ");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			scanf("%d",&mat[i][j]);
	}

	printf("\nBoundary Matrix\n");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			{
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
					{
						printf("%d ", mat[i][j]);
						sum = sum + mat[i][j];
					}
			else
				printf(" ");
			}
		printf("\n");
	}
	printf("\nSum of boundary elemnets is = %d "  ,sum);
}