// Find the smallest element in the array

#include <stdio.h>

int main()
{
    int array[20], length, min;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    min = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("Smallest element in the array is: %d", min);
}