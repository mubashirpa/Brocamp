/*

* *
*
* * * * *
* *
* *
* * * * * * * *
* * *
* * *
* * *
* * * * * * * * * * *

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i * 3 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            if (i == 4)
            {
                break;
            }
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}