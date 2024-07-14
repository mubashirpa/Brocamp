/*

A
A 1
A 1 B
A 1 B 2
A 1 B 2 C

*/

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        int a = 'A';
        int n = 1;

        for (int j = 0; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c ", a++);
            }
            else
            {
                printf("%d ", n++);
            }
        }

        printf("\n");
    }
}