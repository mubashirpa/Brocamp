/*

1       2       3
6       5       4
7       8       9

*/

#include <stdio.h>

int main()
{
    int rows, count = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 != 0) // For odd rows
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d\t", count++);
            }
        }
        else // For even rows
        {
            // for (int j = i * rows; j > i * rows - rows; j--)
            // {
            //     printf("%d\t", j);
            //     count++;
            // }

            int temp = count + rows - 1;
            for (int j = 0; j < rows; j++)
            {
                printf("%d\t", temp--);
                count++;
            }
        }
        printf("\n");
    }
}