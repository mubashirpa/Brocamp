#include <stdio.h>

void deleteElement(int arr[], int *size, int index)
{
    for (int i = index; i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
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
        if (array[i] % 2 == 0)
        {
            deleteElement(array, &length, i);
        }
    }

    printf("Array after removing even numbers: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}