// Find the second smallest element in the array without sorting

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

    int smallest, secondSmallest;

    if (array[0] < array[1])
    {
        smallest = array[0];
        secondSmallest = array[1];
    }
    else
    {
        smallest = array[1];
        secondSmallest = array[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (array[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = array[i];
        }
        else if (array[i] < secondSmallest)
        {
            secondSmallest = array[i];
        }
    }

    printf("Second smallest element in the array is: %d", secondSmallest);
}