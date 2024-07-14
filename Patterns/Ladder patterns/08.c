/*

* * * * * 
*

* * *
* *
* *

* * * * *
* * *
* * *
* * *

* * *

*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int comp;
        if (i % 2 == 0)
        {
            comp = 3;
        }
        else
        {
            comp = 5;
        }

        for (int j = 1; j <= comp; j++)
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
        
        printf("\n");
    }
}