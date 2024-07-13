#include <stdio.h>

int main()
{
    int array1[20][20], array2[20][20], sum[20][20], length;

    printf("Enter the size of arrays: ");
    scanf("%d", &length);

    printf("Enter the values of array 1:\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the values of array 2:\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("Sum of 2 arrays is:\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}