// Find array elements that occur exactly three times

#include <stdio.h>

int main()
{
    int array[20], length, visited[20], tArray[20], tLength = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &length);

    printf("Enter the elements:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

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

        if (count == 3)
        {
            tArray[tLength++] = array[i];
        }
    }

    printf("Elements that exactly occur 3 times are: ");
    for (int i = 0; i < tLength; i++)
    {
        printf("%d, ", tArray[i]);
    }
}