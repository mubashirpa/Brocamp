// Delete an element from a specific position in the array

#include <stdio.h>

int main()
{
    int array[20], length, deleteIndex;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position of element to delete: ");
    scanf("%d", &deleteIndex);

    for (int i = deleteIndex - 1; i < length - 1; i++)
    {
        array[i] = array[i + 1];
    }
    length--;

    printf("Array after deletion: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}