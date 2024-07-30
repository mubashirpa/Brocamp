#include <stdio.h>

/*

*
* *
* * *
* * * *
* * * * *

*/
void rightHalfPyramid(int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

* *
* * * *
* * * * * *
* * * * * * * *

*/
void increasingByDouble(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i * 2; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

* * *
* * * * * *
* * * * * * * * *
* * * * * * * * * * * *

*/
void increasingByTriple(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i * 3; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

* * * * *
* * * *
* * *
* *
*

*/
void invertedRightHalfPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

* * * * * * * *
* * * * * *
* * * *
* *

*/
void invertedDecreasingByDouble(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (rows - i) * 2; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // rightHalfPyramid(rows);

    // increasingByDouble(rows);

    // increasingByTriple(rows);

    // invertedRightHalfPyramid(rows);

    // invertedDecreasingByDouble(rows);
}