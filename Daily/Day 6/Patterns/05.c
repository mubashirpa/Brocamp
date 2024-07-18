/*

*
*
* * *
* *
* *
* * * * *
* * *
* * *
* * *

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}