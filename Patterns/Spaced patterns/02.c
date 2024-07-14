/*

* * * * *
  * * * *
    * * *
      * *
        *

1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1

A B C D E
  A B C D
    A B C
      A B
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

    //     for (int j = 0; j < rows - i; j++)
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

    //     for (int j = 0; j < rows - i; j++)
    //     {
    //         printf("%d ", 1 + j);
    //     }

    //     printf("\n");
    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (int j = 0; j < rows - i; j++)
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }
}