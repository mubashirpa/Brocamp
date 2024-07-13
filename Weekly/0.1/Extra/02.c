#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++) // int j = 0; j < rows - i; j++
        {
            printf(" ");
        }

        for (int k = 1; k < i; k++)
        {
            printf("%d ", k);
        }

        printf("1\n");
    }
}