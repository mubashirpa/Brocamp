// Sort the elements of the array in descending order

#include <stdio.h>

int main()
{
    int array[20], length, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in descending order: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}