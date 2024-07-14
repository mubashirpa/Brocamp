/*

* * * * * * * * * *
*
* * * * * * * *
*
*
* * * * * *
*
*
*
* * * *
*
*
*
*
* *
*
*
*
*
*

*/

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i * 2; j++)
        {
            printf("* ");
        }

        printf("\n");

        for (int k = 5; k >= i; k--)
        {
            printf("*\n");
        }
    }
}