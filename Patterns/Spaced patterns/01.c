/*

    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *

    1 2 3 4 5
   1 2 3 4 5
  1 2 3 4 5
 1 2 3 4 5
1 2 3 4 5

    A B C D E
   A B C D E
  A B C D E
 A B C D E
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
    //     for (int j = 1; j < rows - i; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < rows; j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 1; j < rows - i; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < rows; j++)
    //     {
    //         printf("%d ", 1 + j);
    //     }

    //     printf("\n");
    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j < rows - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < rows; j++)
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }
}