/*

* * * * *
*       *
*       *
*       *
* * * * *

1 2 3 4 5
1       5
1       5
1       5
1 2 3 4 5

A B C D E
A       E
A       E
A       E
A B C D E

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         if (i == 0 || j == 0 || j == rows - 1 || i == rows - 1)
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

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         if (i == 0 || j == 0 || j == rows - 1 || i == rows - 1)
    //         {
    //             printf("%d ", 1 + j);
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == 0 || j == 0 || j == rows - 1 || i == rows - 1)
            {
                printf("%c ", 'A' + j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}