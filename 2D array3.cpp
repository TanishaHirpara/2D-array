#include<stdio.h>

int main()
{
    int a[8][8];
    int i,j,row,col;
    float average,sum=0;
    
	printf("Enter the number of rows and columns \n");
    scanf("%d%d",&row,&col);
    
	printf("Enter the elements of the matrix \n");
    
	for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("The elements in the matrix are\n = ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum = sum + a[i][j];
        }
    }
    average=sum/(row*col);
    printf("\n Average of all the elements of the matrix = %.2f",average);
}

