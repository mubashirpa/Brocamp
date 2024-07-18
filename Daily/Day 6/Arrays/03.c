// Find third smallest element without sorting (Assume no elements are repeating)

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

    int firstMin, secondMin, thirdMin;

    if (array[0] < array[1])
    {
        if (array[0] < array[2])
        {
            firstMin = array[0];
            if (array[1] < array[2])
            {
                secondMin = array[1];
                thirdMin = array[2];
            }
            else
            {
                secondMin = array[2];
                thirdMin = array[1];
            }
        }
        else
        {
            firstMin = array[2];
            secondMin = array[0];
            thirdMin = array[1];
        }
    }
    else
    {
        if (array[1] < array[2])
        {
            firstMin = array[1];
            if (array[0] < array[2])
            {
                secondMin = array[0];
                thirdMin = array[2];
            }
            else
            {
                secondMin = array[2];
                thirdMin = array[0];
            }
        }
        else
        {
            firstMin = array[2];
            secondMin = array[1];
            thirdMin = array[0];
        }
    }

    for (int i = 3; i < length; i++)
    {
        if (array[i] < firstMin)
        {
            thirdMin = secondMin;
            secondMin = firstMin;
            firstMin = array[i];
        }
        else if (array[i] < secondMin)
        {
            thirdMin = secondMin;
            secondMin = array[i];
        }
        else if (array[i] < thirdMin)
        {
            thirdMin = array[i];
        }
    }

    printf("The third smallest element is: %d", thirdMin);
}