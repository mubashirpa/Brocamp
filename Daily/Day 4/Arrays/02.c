// Find unique elements in an array

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[20], unique[20], length, uniqueLength = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < length; j++)
        {
            if (i != j && array[i] == array[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            unique[uniqueLength++] = array[i];
        }
    }

    printf("Unique elements in the array are: ");
    for (int i = 0; i < uniqueLength; i++)
    {
        printf("%d, ", unique[i]);
    }
}