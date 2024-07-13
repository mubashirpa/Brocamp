/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>

int main()
{
    int rows, k = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}