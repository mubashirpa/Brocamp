#include <stdio.h>

int main()
{
    int arr[20], n, sum = 0;
    float avg;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;
    printf("Average of elements: %.2f", avg);
}