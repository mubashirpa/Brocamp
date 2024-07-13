// Print repeated elements in an array

#include <stdio.h>

int main()
{
    int array[20], length, visited[20];

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Repeated elements in the array are: ");

    // for (int i = 0; i < length - 1; i++)
    // {
    //     for (int j = i + 1; j < length; j++)
    //     {
    //         if (array[i] == array[j])
    //         {
    //             printf("%d, ", array[i]);
    //         }
    //     }
    // }

    for (int i = 0; i < length; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        int count = 1;

        for (int j = i + 1; j < length; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1)
        {
            printf("%d, ", array[i]);
        }
    }
}