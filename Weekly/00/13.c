#include <stdio.h>

int main()
{
    char string[20], stringLength = 0;

    printf("Enter a string:\n");
    scanf("%s", &string);

    while (string[stringLength] != '\0')
    {
        stringLength++;
    }

    for (int i = 0; i < stringLength / 2; i++)
    {
        if (string[i] != string[stringLength - i - 1])
        {
            printf("Entered string is not a palindrome");
            return 0;
        }
    }

    printf("Entered string is a palindrome");
}