/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I

*/

#include <stdio.h>

int main()
{
  int rows;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  // for (int i = 1; i <= rows; i++)
  // {
  //     for (int j = 1; j < i; j++)
  //     {
  //         printf("  ");
  //     }

  //     for (int j = 0; j <= 2 * (rows - i); j++)
  //     {
  //         printf("* ");
  //     }

  //     printf("\n");
  // }

  // for (int i = 1; i < rows; i++)
  // {
  //     for (int j = 0; j < rows - i - 1; j++)
  //     {
  //         printf("  ");
  //     }

  //     for (int j = 0; j < (i + 1) * 2 - 1; j++)
  //     {
  //         printf("* ");
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
  //         printf("%d ", 1 + k);
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
      printf("%c ", 'A' + k);
    }

    printf("\n");
  }
}