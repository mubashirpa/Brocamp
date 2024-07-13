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

        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum of even numbers: %d", sum);
}