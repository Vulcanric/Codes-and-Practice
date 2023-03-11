#include <stdio.h>                              /**
 * main - Matrix of numbers in multiplication table
 * @multi_tbl: 2D array of multiplication table
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Declaring 2D array*/
    int multi_tbl[12][12];

/* Function to calculate each element of*/
/* the array multi_tbl using loop */
    for(int i = 0; i < 12; i++)
    {
    for(int j = 0; j < 12; j++)
    {
    multi_tbl[i][j] = (i + 1) * (j + 1);
    }
    }

/* Printing the value of the elements */
/* which is the multiplication table in*/
/* form of matrix */
puts("\n Multiplication Table (1-12)\n");
    for(int i = 0; i < 12; i++)
    {
    for(int j = 0; j < 12; j++)
    {
    printf("%d ", multi_tbl[i][j]);
    if(j == 11)
    {
    printf("\n"); 
    }
    }
    }
    return 0;
}
