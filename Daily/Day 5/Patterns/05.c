/*

M
MA
MAL
MALA
MALAY
MALAYA
MALAYAL
MALAYALA
MALAYALAM

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char value[20];

    printf("Enter the value: ");
    scanf("%s", &value);

    int rows = strlen(value);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", value[j]);
        }
        printf("\n");
    }
}