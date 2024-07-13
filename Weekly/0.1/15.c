#include <stdio.h>

void getArray(int arr[], int *length) // Use pointer to directly modify the length variable in main
{
    printf("Enter the size of the array: ");
    scanf("%d", length);

    printf("Enter the elements:\n");
    for (int i = 0; i < *length; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int length)
{
    printf("The given array is: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int array[20], length;

    getArray(array, &length);

    displayArray(array, length);
}