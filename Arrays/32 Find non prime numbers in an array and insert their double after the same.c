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
            for (int j = length; j > i + 1; j--)
            {
                array[j] = array[j - 1];
            }
            array[i + 1] = array[i] * 2;
            length++;
            i++;
        }
    }

    printf("Array after inserting double after non-prime numbers: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}