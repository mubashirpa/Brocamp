/*

*
*
* * *
* *
* *
* * * * * *
* * *
* * *
* * *
* * * * * * * * *

*/

#include <stdio.h>

int main()
{
    printf("*\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }

        for (int k = 1; k <= i * 3; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}