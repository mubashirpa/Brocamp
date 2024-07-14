/*

* * * * * 
*
*
*
* * * * * * * * * *
*
*
*
*
*
*
* * * * * * * * * * * * * * *

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i * 5; j++)
        {
            printf("* ");
        }

        printf("\n");

        for (int k = 1; k <= i * 3; k++)
        {
            if (i == 3)
            {
                break;
            }
            printf("*\n");
        }
    }
}