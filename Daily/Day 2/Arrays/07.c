// Insert an element at a specific position in the array

#include <stdio.h>

int main()
{
    int array[20], length, newValue, newIndex;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter new element: ");
    scanf("%d", &newValue);

    printf("Enter new element position: ");
    scanf("%d", &newIndex);

    for (int i = length; i > newIndex; i--)
    {
        array[i] = array[i - 1];
    }

    array[newIndex] = newValue;
    length++;

    printf("New array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}