/*

1
3       2
4       5       6
10      9       8       7

*/

#include <stdio.h>

int main()
{
    int rows, count = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 != 0) // For odd numbers
        {
            for (int j = 0; j < i; j++)
            {
                printf("%d\t", count++);
            }
        }
        else // For even numbers
        {
            int temp = count + i - 1;
            for (int j = 0; j < i; j++)
            {
                printf("%d\t", temp--);
                count++;
            }
        }
        printf("\n");
    }
}