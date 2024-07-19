/*

* * * * * * * * *
  *           *
    *       *
      *   *
        *

1 2 3 4 5 6 7 8 9
  1           7
    1       5
      1   3
        1

A B C D E F G H I
  A           G
    A       E
      A   C
        A

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // for (int i = 0; i < 2 * rows - 1; i++)
    // {
    //     printf("* ");
    // }

    // printf("\n");

    // for (int i = 1; i < rows; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k < 2 * (rows - i); k++)
    //     {
    //         if (k == 1 || k == 2 * (rows - i) - 1)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 2 * rows - 1; i++)
    // {
    //     printf("%d ", 1 + i);
    // }

    // printf("\n");

    // for (int i = 1; i < rows; i++)
    // {
    //     int count = 0;

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k < 2 * (rows - i); k++)
    //     {
    //         count++;
    //         if (k == 1 || k == 2 * (rows - i) - 1)
    //         {
    //             printf("%d ", count);
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < 2 * rows - 1; i++)
    {
        printf("%c ", 'A' + i);
    }

    printf("\n");

    for (int i = 1; i < rows; i++)
    {
        char count = 'A';

        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k < 2 * (rows - i); k++)
        {
            if (k == 1 || k == 2 * (rows - i) - 1)
            {
                printf("%c ", count);
            }
            else
            {
                printf("  ");
            }
            count++;
        }
        printf("\n");
    }
}