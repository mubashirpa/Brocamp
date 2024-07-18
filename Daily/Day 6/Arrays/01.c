// Delete three elements after occurrence of a non prime number

#include <stdio.h>
#include <stdbool.h>

bool isNotPrime(int n)
{
    if (n <= 1)
    {
        return true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

void deleteElement(int arr[], int *length, int index)
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
        if (isNotPrime(array[i]))
        {
            if (i + 1 < length)
            {
                deleteElement(array, &length, i + 1);
            }
            if (i + 1 < length)
            {
                deleteElement(array, &length, i + 1);
            }
            if (i + 1 < length)
            {
                deleteElement(array, &length, i + 1);
            }
        }
    }

    printf("Array after deleting three elements after occurrence of a non prime number: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}