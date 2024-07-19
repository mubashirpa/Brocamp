/*

* * * * * * * * *
  *           *
    *       *
      *   *
        *
      *   *
    *       *
  *           *
* * * * * * * * *

1 2 3 4 5 6 7 8 9
  1           7
    1       5
      1   3
        1
      1   3
    1       5
  1           7
1 2 3 4 5 6 7 8 9

A B C D E F G H I
  A           G
    A       E
      A   C
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

    // for (int i = 0; i < 2 * rows - 1; i++)
    // {
    //     int comp;
    //     if (i < rows)
    //     {
    //         comp = 2 * i + 1;
    //     }
    //     else
    //     {
    //         comp = 2 * (2 * rows - i) - 3;
    //     }

    //     for (int j = 1; j < comp; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int k = 0; k < 2 * rows - comp; k++)
    //     {
    //         if (i == 0 || k == 0 || k == (2 * rows - comp) - 1 || i == 2 * rows - 2)
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
    //     int comp;
    //     if (i < rows)
    //     {
    //         comp = 2 * i + 1;
    //     }
    //     else
    //     {
    //         comp = 2 * (2 * rows - i) - 3;
    //     }

    //     for (int j = 1; j < comp; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int k = 0; k < 2 * rows - comp; k++)
    //     {
    //         if (i == 0 || k == 0 || k == (2 * rows - comp) - 1 || i == 2 * rows - 2)
    //         {
    //             printf("%d ", 1 + k);
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
        int comp;
        if (i < rows)
        {
            comp = 2 * i + 1;
        }
        else
        {
            comp = 2 * (2 * rows - i) - 3;
        }

        for (int j = 1; j < comp; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * rows - comp; k++)
        {
            if (i == 0 || k == 0 || k == (2 * rows - comp) - 1 || i == 2 * rows - 2)
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
}