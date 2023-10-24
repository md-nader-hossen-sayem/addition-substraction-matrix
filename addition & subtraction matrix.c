// Addition & substraction by array
#include<stdio.h>
int main()
{
    int matrixNoOne[10][10], matrixNoTwo[10][10], addition[10][10], substraction[10][10];
    int row, col, num, sum=0;

     //take input from user row and col
     printf("Enter rows number: ");
     scanf("%d",&row);
     printf("Enter col number: ");
     scanf("%d",&col);

    printf("\n");

    //Take input from user for the first matrix
    printf("Enter value for Matrix No One---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matrixNoOne[i][j]);
        }
        printf("\n");
    }

    //Take input from user for the second matrix
    printf("Enter value for Matrix No two---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matrixNoTwo[i][j]);
        }
        printf("\n");
    }

    //Addition of Matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            addition[i][j] = matrixNoOne[i][j] + matrixNoTwo[i][j];
        }
    }

    //Substraction of Matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            substraction[i][j] = matrixNoOne[i][j] - matrixNoTwo[i][j];
        }
    }

    //print matrix one
    printf("\n Matrix No One---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf(" %d  ",matrixNoOne[i][j]);
        }
        printf("\n");
    }

    //print matrix two
    printf("\n Matrix No Two---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf(" %d  ",matrixNoTwo[i][j]);
        }
        printf("\n");
    }

    //print addition matrix
    printf("\n Addition Matrix---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d  ",addition[i][j]);
        }
        printf("\n");
    }

    //print substraction matrix
    printf("\n Substraction Matrix---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf(" %d  ",substraction[i][j]);
        }
        printf("\n");
    }

    return 0;
}

