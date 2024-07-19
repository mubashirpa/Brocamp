/*

        *
      *   *
    *       *
  *           *
* * * * * * * * *

        1
      1   3
    1       5
  1           7
1 2 3 4 5 6 7 8 9

        A 
      A   C 
    A       E 
  A           G 
A B C D E F G H I

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // for (int i = 1; i < rows; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k <= i * 2 - 1; k++)
    //     {
    //         if (k == 1 || k == i * 2 - 1)
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
    //     printf("* ");
    // }

    // for (int i = 1; i <= rows - 1; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k <= i * 2 - 1; k++)
    //     {
    //         if (k == 1 || k == i * 2 - 1)
    //         {
    //             printf("%d ", k);
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }

    //     printf("\n");
    // }
    // for (int i = 1; i <= 2 * rows - 1; i++)
    // {
    //     printf("%d ", i);
    // }

    for (int i = 1; i <= rows - 1; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < i * 2 - 1; k++)
        {
            if (k == 0 || k == i * 2 - 2)
            {
                printf("%c ", 'A' + k);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    for (int i = 0; i < 2 * rows - 1; i++)
    {
        printf("%c ", 'A' + i);
    }
}