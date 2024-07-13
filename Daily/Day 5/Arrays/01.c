// Delete two elements after occurrence of a prime number

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void removeElements(int arr[], int *length, int index)
{
    for (int i = index; i < *length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*length)--;
}

int main()
{

    int array[20], length;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (isPrime(array[i]))
        {
            if (i + 1 < length)
            {
                removeElements(array, &length, i + 1);
            }
            if (i + 1 < length)
            {
                removeElements(array, &length, i + 1);
            }
        }
    }

    printf("Modified array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}