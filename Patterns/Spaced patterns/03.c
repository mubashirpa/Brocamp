/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1

A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 1; j < 2 * (rows - i); j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 1; j < 2 * (rows - i); j++)
    //     {
    //         printf("%d ", 0 + j);
    //     }

    //     printf("\n");
    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }
}