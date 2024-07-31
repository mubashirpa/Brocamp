#include <stdio.h>

int main()
{
    int array[20], length, nArray[20], nLength = 0;

    printf("Enter the array limit\n");
    scanf("%d", &length);

    printf("Enter values of array\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length - 1; i++)
    {
        nArray[nLength++] = array[i] * array[i + 1];
    }

    printf("Output\n");
    for (int i = 0; i < nLength; i++)
    {
        printf("%d\t", nArray[i]);
    }
}