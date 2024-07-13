// Find average of prime numbers in an array

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

int main()
{
    int array[20], length, sum = 0, c = 0;
    float avg;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);

        if (isPrime(array[i]))
        {
            sum += array[i];
            c++;
        }
    }

    avg = (float)sum / c;
    printf("Average of prime numbers in the array is: %f", avg);
}