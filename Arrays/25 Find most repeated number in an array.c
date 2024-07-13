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

    int mostRepeated = 1, repeatedCount = array[0];

    // for (int i = 0; i < length; i++)
    // {
    //     int count = 0;

    //     for (int j = 0; j < length; j++)
    //     {
    //         if (array[i] == array[j])
    //         {
    //             if (i > j)
    //             {
    //                 break;
    //             }
    //             count++;
    //         }
    //     }

    //     if (count > repeatedCount)
    //     {
    //         repeatedCount = count;
    //         mostRepeated = array[i];
    //     }
    // }

    // for (int i = 0; i < length; i++)
    // {
    //     int count = 1;

    //     for (int j = i + 1; j < length; j++)
    //     {
    //         if (array[i] == array[j])
    //         {
    //             count++;
    //         }
    //     }

    //     if (count > repeatedCount)
    //     {
    //         repeatedCount = count;
    //         mostRepeated = array[i];
    //     }
    // }

    int visited[20];
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

        if (count > repeatedCount)
        {
            repeatedCount = count;
            mostRepeated = array[i];
        }
    }

    printf("Most repeated number is %d with %d times", mostRepeated, repeatedCount);
}