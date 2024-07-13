// Find the index of a specific element in the array

#include <stdio.h>

int main()
{
    int array[20], size, value, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the value: ");
    scanf("%d", &value);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            index = i;
            break;
        }
    }

    printf("Index of %d is %d", value, index);
}