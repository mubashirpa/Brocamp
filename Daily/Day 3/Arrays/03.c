// Find the second largest element in the array without sorting

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

    int largest, secondLargest;

    if (array[0] > array[1])
    {
        largest = array[0];
        secondLargest = array[1];
    }
    else
    {
        largest = array[1];
        secondLargest = array[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest)
        {
            secondLargest = array[i];
        }
    }

    printf("Second largest element in the array is: %d", secondLargest);
}