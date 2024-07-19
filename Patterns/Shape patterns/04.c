/*

        *
      *   *
    *       *
  *           *
*               *
  *           *
    *       *
      *   *
        *

        1
      1   3
    1       5
  1           7
1               9
  1           7
    1       5
      1   3
        1

        A
      A   C
    A       E
  A           G
A               I
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

    // for (int i = 1; i <= rows; i++)
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

    // for (int i = 1; i <= rows - 1; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k <= (rows - i) * 2 - 1; k++)
    //     {
    //         if (k == 1 || k == (rows - i) * 2 - 1)
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

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k <= i * 2 - 1; k++)
    //     {
    //         if (k == 1 || k == i * 2 - 1)
    //         {
    //             printf("%d ", 1 + (k - 1));
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= rows - 1; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k <= (rows - i) * 2 - 1; k++)
    //     {
    //         if (k == 1 || k == (rows - i) * 2 - 1)
    //         {
    //             printf("%d ", 1 + (k - 1));
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }

    //     printf("\n");
    // }

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                printf("%c ", 'A' + (k - 1));
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    for (int i = 1; i <= rows - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= (rows - i) * 2 - 1; k++)
        {
            if (k == 1 || k == (rows - i) * 2 - 1)
            {
                printf("%c ", 'A' + (k - 1));
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}