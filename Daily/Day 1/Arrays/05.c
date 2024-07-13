// Replace all negative elements in the array with zeros

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

    for (int i = 0; i < length; i++)
    {
        if (array[i] < 0)
        {
            array[i] = 0;
        }
    }

    printf("Result array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}