// Merge two arrays into a third array

#include <stdio.h>

int main()
{
    int array1[20], array1Length, array2[20], array2Length, mergedArray[40], mergedArrayLength = 0;

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
        mergedArray[i] = array1[i];
        mergedArrayLength++;
    }

    for (int i = 0; i < array2Length; i++)
    {
        mergedArray[mergedArrayLength++] = array2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < mergedArrayLength; i++)
    {
        printf("%d, ", mergedArray[i]);
    }
}