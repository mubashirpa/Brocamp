#include <stdio.h>

int main()
{
    int arr[20], n, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }

    while (count < n)
    {
        arr[count++] = 0;
    }

    printf("Result array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d, ", arr[i]);
    }
}