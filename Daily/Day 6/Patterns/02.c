/*

X X X X X X
X
X X X X
X
X X
X

*/

#include <stdio.h>

int main()
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= i * 2; j++)
        {
            printf("X ");
        }
        printf("\nX\n");
    }
}