#include <stdio.h>

/*

    *
   * *
  * * *
 * * * *
* * * * *

*/
void fullPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
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
void invertedFullPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
        }

        for (int k = rows; k >= i; k--)
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

    // fullPyramid(rows);

    // invertedFullPyramid(rows);
}