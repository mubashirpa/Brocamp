// Separate even and odd elements into two separate arrays

#include <stdio.h>

int main()
{
    int array[20], length, even[20], eLength = 0, odd[20], oLength = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0)
        {
            even[eLength++] = array[i];
        }
        else
        {
            odd[oLength++] = array[i];
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < eLength; i++)
    {
        printf("%d, ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < oLength; i++)
    {
        printf("%d, ", odd[i]);
    }
}