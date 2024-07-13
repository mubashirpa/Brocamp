// Print an array in reverse order

#include <stdio.h>

int main()
{
    int array[20], size, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
}