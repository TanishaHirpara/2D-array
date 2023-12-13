#include<stdio.h>

main()

{
	int i,j,r,c,sum = 0;
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
	printf("\n----------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d" ,a[i][j]);
			if(i==j)
			{
				sum  = sum +a[i][j];
			}
			
		}
		printf("\n");
	}

int ans = 0;
printf("\n----------\n");
        {
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d" ,a[i][j]);
			if(i+j==2)
			{
				ans = ans + a[i][j];
			}
			
		}
		printf("\n");
	} 
	printf("The sum of diagonal is = %d\n " ,sum);
	printf("The sum of anti-diagonal is = %d\n " ,ans);
	int cross = sum + ans;
	printf("The sum of cross-diagonal is = %d " ,cross);
}
}