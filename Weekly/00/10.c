#include <stdio.h>

int main()
{
    int arr1[20], arr2[20], n, temp;

    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    printf("Enter the values of Array 1\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the values of Array 2\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("Arrays after swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr2[i]);
    }
}