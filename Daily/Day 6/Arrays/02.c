// Find third largest element without sorting (Assume no elements are repeating)

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

    int firstMax, secondMax, thirdMax;

    if (array[0] > array[1])
    {
        if (array[0] > array[2])
        {
            firstMax = array[0];
            if (array[1] > array[2])
            {
                secondMax = array[1];
                thirdMax = array[2];
            }
            else
            {
                secondMax = array[2];
                thirdMax = array[1];
            }
        }
        else
        {
            firstMax = array[2];
            secondMax = array[0];
            thirdMax = array[1];
        }
    }
    else
    {
        if (array[1] > array[2])
        {
            firstMax = array[1];
            if (array[0] > array[2])
            {
                secondMax = array[0];
                thirdMax = array[2];
            }
            else
            {
                secondMax = array[2];
                thirdMax = array[0];
            }
        }
        else
        {
            firstMax = array[2];
            secondMax = array[1];
            thirdMax = array[0];
        }
    }

    for (int i = 3; i < length; i++)
    {
        if (array[i] > firstMax)
        {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = array[i];
        }
        else if (array[i] > secondMax)
        {
            thirdMax = secondMax;
            secondMax = array[i];
        }
        else if (array[i] > thirdMax)
        {
            thirdMax = array[i];
        }
    }

    printf("The third largest element is: %d", thirdMax);
}