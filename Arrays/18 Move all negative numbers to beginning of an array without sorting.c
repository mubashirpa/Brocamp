#include <stdio.h>

int main()
{
    int arr[20], n, temp, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp = arr[i];

            for (int j = i; j > count; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[count++] = temp;
        }
    }

    printf("Result array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}