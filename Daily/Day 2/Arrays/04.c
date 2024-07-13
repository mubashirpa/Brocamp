// Find the average of even elements in the array

#include <stdio.h>

int main()
{
    int array[20], length, sum = 0, count = 0, avg;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            sum += array[i];
            count++;
        }
    }

    avg = sum / count;
    printf("Average of even elements in the array is: %d", avg);
}