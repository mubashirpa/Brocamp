#include <stdio.h>

int main()
{
    int arr[20], limit, sum = 0;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("Sum of odd numbers: %d", sum);
}