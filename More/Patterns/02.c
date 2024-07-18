/*

0 1
0 2 4
0 3 6 9
0 4 8 12 16
0 5 10 15 20 25

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        int count = 0;

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", count);
            count += i;
        }

        printf("\n");
    }

    // for (int i = 1; i <= rows; i++)
    // {
    //     printf("0 ");
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", i * j);
    //     }
    //     printf("\n");
    // }
}