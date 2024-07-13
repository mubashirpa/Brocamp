/*

A
A 2
A 2 C
A 2 C 4
A 2 C 4 E

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c ", 'A' + j);
            }
            else
            {
                printf("%d ", 1 + j);
            }
        }
        printf("\n");
    }
}