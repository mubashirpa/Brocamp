#include <stdio.h>

int compareString(char str1[], char str2[])
{
    int str1Length = 0, str2Length = 0;

    while (str1[str1Length] != '\0')
    {
        str1Length++;
    }

    while (str2[str2Length] != '\0')
    {
        str2Length++;
    }

    if (str1Length != str2Length)
    {
        return -1;
    }

    for (int i = 0; i < str1Length; i++)
    {
        if (str1[i] != str2[i])
        {
            return -1;
            break;
        }
    }

    return 0;
}

int main()
{
    char str1[20], str2[20];

    printf("Enter value 1: ");
    scanf("%s", &str1);

    printf("Enter value 2: ");
    scanf("%s", &str2);

    if (compareString(str1, str2) == 0)
    {
        printf("The strings are equal");
    }
    else
    {
        printf("The strings are not equal");
    }
}