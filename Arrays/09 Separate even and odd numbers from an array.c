#include <stdio.h>

int main()
{
    int arr[20], odd[20], even[20], n, oddCount = 0, evenCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            even[evenCount++] = arr[i];
        }
        else
        {
            odd[oddCount++] = arr[i];
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d, ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d, ", odd[i]);
    }
}