// Find average of non prime numbers in an array

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
    int array[20], length, sum = 0, count = 0;
    float avg;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);

        if (isNotPrime(array[i]))
        {
            sum += array[i];
            count++;
        }
    }

    avg = (float)sum / count;
    printf("Average of non prime numbers in the array is: %f", avg);
}