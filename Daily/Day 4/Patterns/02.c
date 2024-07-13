/*

1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/

#include <stdio.h>

int main()
{
    int rows, k = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= i + k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k++;
    }
}