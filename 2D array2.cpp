#include<stdio.h>

int main() 
{

char result[3][3] = { { 1,2,3} , 
                      {4,5,6} ,
                      {7,8,9} };
{

int row = sizeof(result) / sizeof(result[0]);
int column = sizeof(result[0])/row;

printf("Number of rows: %d\n", row);
printf("Number of columns: %d\n", column);
}



}

