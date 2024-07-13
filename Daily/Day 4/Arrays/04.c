// Remove duplicates from the array

#include <stdio.h>

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
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < length; k++)
                {
                    array[k] = array[k + 1];
                }
                length--;
            }
        }
    }

    printf("New array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}