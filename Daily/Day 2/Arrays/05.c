// Find the average of odd elements in the array

#include <stdio.h>

int main()
{
    int array[20], length, oddSum = 0, oddLength = 0, oddAvg;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 != 0)
        {
            oddSum += array[i];
            oddLength++;
        }
    }

    oddAvg = oddSum / oddLength;
    printf("Average of odd elements in the array is: %d", oddAvg);
}