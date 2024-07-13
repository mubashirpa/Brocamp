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

    int smallest, sSmallest;
    if (array[0] < array[1])
    {
        smallest = array[0];
        sSmallest = array[1];
    }
    else
    {
        smallest = array[1];
        sSmallest = array[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (array[i] < smallest)
        {
            sSmallest = smallest;
            smallest = array[i];
        }
        else if (array[i] < sSmallest)
        {
            sSmallest = array[i];
        }
    }

    printf("The second smallest element in the array is: %d", sSmallest);
}