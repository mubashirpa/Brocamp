/*

*
* * *
* * * * *
* * * * * * *
* * * * * * * * *

*/

#include <stdio.h>

int main()
{
    int rows, k = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i + k; j++)
        {
            printf("* ");
        }
        printf("\n");
        k++;
    }
}