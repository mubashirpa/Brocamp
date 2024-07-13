#include <stdio.h>

int main()
{
    int arr[20], n, sum;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }

    printf("Sum of elements: %d", sum);
}