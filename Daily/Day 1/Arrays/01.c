// Calculate the sum of all elements in the array

#include <stdio.h>

int main()
{
    int array[20], size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum of all elements is: %d", sum);
}