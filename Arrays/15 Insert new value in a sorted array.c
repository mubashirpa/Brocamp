#include <stdio.h>

int main()
{
    int arr[20], n, newValue, newIndex;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > newValue)
        {
            newIndex = i;
            break;
        }
    }

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