void moveZerosToBeginning(int arr[], int size)
{
    int count = size - 1;

    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            arr[count--] = arr[i];
        }
    }

    while (count >= 0)
    {
        arr[count--] = 0;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int arr[20], n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int size = sizeof(arr) / sizeof(arr[0]); // Use only when the array values are hardcoded instead collecting from user

    printf("Given array: ");
    printArray(arr, n);

    printf("\nResult array: ");
    moveZerosToBeginning(arr, n);
    printArray(arr, n);
}