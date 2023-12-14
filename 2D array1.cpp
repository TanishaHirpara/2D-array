#include<stdio.h>

main()

{
	int r,c,i,j;
	printf("Enter the row size = ");
	scanf("%d" ,&r);
	printf("Enter the column size = ");
	scanf("%d" ,&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
		printf("\n");
	}
	printf("\n--------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
		printf("\n");
	}
}

