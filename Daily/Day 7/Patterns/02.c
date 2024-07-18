/*

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", 1 + k);
        }
        printf("\n");
    }
}