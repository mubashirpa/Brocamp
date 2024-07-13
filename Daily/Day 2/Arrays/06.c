// Reverse the elements of the array

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

    for (int i = 0; i < length / 2; i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}