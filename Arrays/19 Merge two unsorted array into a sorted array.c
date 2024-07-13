#include <stdio.h>

int main()
{
    int array1[20], array2[20], mergerdArray[40], array1Length, array2Length, mergedArrayLength, temp;

    printf("Enter the size of the first array: ");
    scanf("%d", &array1Length);

    printf("Enter the elements of first array:\n");
    for (int i = 0; i < array1Length; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &array2Length);

    printf("Enter the elements of second array:\n");
    for (int i = 0; i < array2Length; i++)
    {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < array1Length; i++)
    {
        mergerdArray[i] = array1[i];
    }

    for (int i = 0; i < array2Length; i++)
    {
        mergerdArray[array1Length + i] = array2[i];
    }

    mergedArrayLength = array1Length + array2Length;

    printf("Merged array: ");
    for (int i = 0; i < mergedArrayLength; i++)
    {
        printf("%d, ", mergerdArray[i]);
    }

    for (int i = 0; i < mergedArrayLength - 1; i++)
    {
        for (int j = 0; j < mergedArrayLength - i - 1; j++)
        {
            if (mergerdArray[j] > mergerdArray[j + 1])
            {
                temp = mergerdArray[j];
                mergerdArray[j] = mergerdArray[j + 1];
                mergerdArray[j + 1] = temp;
            }
        }
    }

    printf("\nMerged array in ascending order: ");
    for (int i = 0; i < mergedArrayLength; i++)
    {
        printf("%d, ", mergerdArray[i]);
    }
}