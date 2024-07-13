#include <stdio.h>

int main()
{
    int arr[20], n, count = 0, sum = 0;
    float avg;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            count++;
            sum += arr[i];
        }
    }

    if (count > 0)
    {
        avg = (float)sum / count;
        printf("Average of even numbers: %.2f", avg);
    }
    else
    {
        printf("No even numbers in the array");
    }
}