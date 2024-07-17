/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }

        int count = 1; // Initialize count for each row

        // Print ascending and descending numbers
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            printf("%d ", count); // Print current count

            if (k >= i)
            {
                count--; // Decrement after midpoint
            }
            else
            {
                count++; // Increment until midpoint
            }
        }

        // Move to the next line
        printf("\n");
    }
}