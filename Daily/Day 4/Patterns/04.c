/*

50
45 40
35 30 25
20 15 10 5

*/

#include <stdio.h>

int main()
{
    int rows, value = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Calculate the starting value
    for (int i = rows; i > 0; i--)
    {
        value += i * 5;
    }

    // value = (rows * (rows + 1) / 2) * 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", value);
            value -= 5;
        }
        printf("\n");
    }
}