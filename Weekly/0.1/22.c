#include <stdio.h>

void getArray(int array1[20][20], int array2[20][20], int length)
{
    printf("Enter the values of array 1\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the values of array 2\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
}

void addArray(int array1[20][20], int array2[20][20], int array3[20][20], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

void displayArray(int array3[20][20], int length)
{
    printf("Sum of array 1 and array 2:\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d\t", array3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int array1[20][20], array2[20][20], array3[20][20], length;

    printf("Enter the size of the array\n");
    scanf("%d", &length);

    getArray(array1, array2, length);

    addArray(array1, array2, array3, length);

    displayArray(array3, length);
}