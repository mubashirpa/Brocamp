#include <stdio.h>

int main()
{
    int arr[20], n, newIndex, newValue;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert new value: ");
    scanf("%d", &newIndex);

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    for (int i = n; i > newIndex; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[newIndex] = newValue;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}