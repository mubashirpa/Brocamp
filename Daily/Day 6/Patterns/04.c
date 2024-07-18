/*

*
* *
*
*
* * * *
*
*
*
* * * * * *

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        for (int k = 1; k <= i * 2; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}