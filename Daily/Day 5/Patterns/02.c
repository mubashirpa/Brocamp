/*

A
1 1
B B B
2 2 2 2
C C C C C

*/

#include <stdio.h>

int main()
{
    int rows, n = 1;
    char a = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c ", a);
            }
            else
            {
                printf("%d ", n);
            }
        }

        if (i % 2 != 0)
        {
            a++;
        }
        else
        {
            n++;
        }
        printf("\n");
    }
}