#include <stdio.h>

int main()
{
    int array[20], length, evenCount = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &length);

    printf("Enter the values of array:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    printf("Number of given numbers in the given array is %d", evenCount);
}