// Write a program in C to move all zeros to the first without sorting (Don’t change order of elements)

#include <stdio.h>

int main()
{
    int array[20], length;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    int count = length - 1;

    for (int i = length - 1; i >= 0; i--)
    {
        if (array[i] != 0)
        {
            array[count--] = array[i];
        }
    }

    while (count >= 0)
    {
        array[count--] = 0;
    }

    printf("Array after moving all zeros to the first: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}