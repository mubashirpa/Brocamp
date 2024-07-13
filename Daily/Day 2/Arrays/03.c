// Calculate the average of all elements in the array

#include <stdio.h>

int main()
{
    int array[20], length, sum = 0, avg;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    avg = sum / length;
    printf("Average of all elements in the array is: %d", avg);
}