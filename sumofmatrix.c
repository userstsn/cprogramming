#include <stdio.h>
#define row 2
#define col 2

int main()
{
    int matrix1[row][col] , matrix2[row][col] , sum[row][col], i ,j;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           printf("Enter 1st matrix [%d][%d]'s element\n",i,j);
           scanf("%d",&matrix1[i][j]);
        }
        
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           printf("Enter 2st matrix [%d][%d]'s element\n",i,j);
           scanf("%d",&matrix2[i][j]);
        }
        
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        
    }

    printf("the result is :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           printf("%d\t", sum[i][j]);
           
        }
        printf("\n");
        
    }

    

    

    return 0;
}