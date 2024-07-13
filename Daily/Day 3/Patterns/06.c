/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j >= rows - i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}