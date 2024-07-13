#include <stdio.h>

int main()
{
    int arr[20], arr2[20], n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    printf("Copied array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr2[i]);
    }
}