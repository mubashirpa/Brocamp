/*

5
4 5
3 4 5
2 3 4 5
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
        for (int j = rows - i; j <= rows; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}